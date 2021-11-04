options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64 shared public

require jit_x86_64_regs
require jit_x86_64_common
require jit_x86_64_alloc_regs
require jit_x86_64_generate

require daslib/ast_boost
require daslib/strings_boost
require daslib/templates_boost
require math

require dasxbyak/xbyak_boost
require xbyak public
require zydis

require ast public

def allocate_regs(var func : FunctionPtr)
    var allocateRegistersVisitor = new AllocateRegistersCodeVisitor()
    var allocateRegistersVisitorAdapter <- make_visitor(*allocateRegistersVisitor)
    visit(func, allocateRegistersVisitorAdapter)
    var cont <- allocateRegistersVisitor.context
    allocateRegistersVisitorAdapter := null
    unsafe
        delete allocateRegistersVisitor
    return <- cont

def public generate_x86_64(var func:FunctionPtr; show_disasm:bool ) : CodeGenerator?
    var context : EvContext
    var allocateRegistersVisitor = new AllocateRegistersCodeVisitor(context)
    var allocateRegistersVisitorAdapter <- make_visitor(*allocateRegistersVisitor)
    visit(func, allocateRegistersVisitorAdapter)
    let f2a = allocateRegistersVisitor.failed_to_generate
    context <- allocateRegistersVisitor.context
    if allocateRegistersVisitor.verbose
        context |> dump
    allocateRegistersVisitorAdapter := null
    unsafe
        delete allocateRegistersVisitor
    if f2a
        print("--------------------------------\n")
        print("jit_x86_64: failed due to errors\n")
        print("--------------------------------\n")
        return null
    // verify GP regs
    let temp_gp = length(context.gpa.regs)
    if temp_gp > MAX_GP_TEMP_REG
        print("jit_x86_64: failed for {func.name}, too many temp gp registers {temp_gp} of {MAX_GP_TEMP_REG}")
        return null
    // verify XMM regis
    let temp_xmm = length(context.xmma.regs)
    if temp_xmm > MAX_XMM_TEMP_REG
        print("jit_x86_64: failed for {func.name}, too many temp xmm registers {temp_xmm} of {MAX_XMM_TEMP_REG}")
        return null
    // generation extra settings
    context.assume_no_exceptions = false
    // generate code
    var gen = new CodeGenerator
    *gen |> inLocalLabel()
    var generateCodeVisitor = new GenerateCodeVisitor(gen,context)
    var generateCodeVisitorAdapter <- make_visitor(*generateCodeVisitor)
    visit(func, generateCodeVisitorAdapter)
    let f2g = generateCodeVisitor.failed_to_generate
    generateCodeVisitorAdapter := null
    *gen |> outLocalLabel()
    unsafe
        delete generateCodeVisitor
    unsafe
        if show_disasm
            let data = *gen |> get_code()
            let dataLength = *gen |> getSize()
            print("{describe_function(func)}data at {intptr(data)} of {int(dataLength)} bytes\n")
            disassemble(data, dataLength)
            print("\n")
        let err = reinterpret<GenerationError> GetError()
        if err != GenerationError NONE
            panic("xbyak - generation error {err}")
    if f2g
        print("jit_x86_64: failed to generate {func.name} aka {get_mangled_name(func)}\n")
        unsafe
            delete gen
    return gen

[function_macro(name="jit_x86_64")]
class Jit_x86_64_Macro : AstFunctionAnnotation
    def override apply ( var func:FunctionPtr; var group:ModuleGroup; args:AnnotationArgumentList; var errors : das_string ) : bool
        func.sideEffectFlags |= bitfield(int(SideEffects userScenario))
        var qblock <- quote() <|
            unsafe
                if get_ptr(this_program()) != null
                    var fnptr <- find_module_function_via_rtti(find_module_via_rtti(this_program(),PMOD),PFUN)
                    var gen = generate_x86_64(fnptr,SHOW_DISASM)
                    if gen != null
                        *gen |> instrument_jit(reinterpret<function> PFUN)
                    fnptr := null
                else
                    panic("missing 'options rtti'")
        let show_disasm = find_arg("asm",args) ?as tBool ?? false
        apply_template(qblock) <| $ ( rules )
            rules |> replaceVariable("PFUN") <| new [[ExprAddr() target:=func.name]]
            rules |> replaceVariable("PMOD") <| new [[ExprConstString() value:=compiling_module().name]]
            rules |> replaceVariable("SHOW_DISASM") <| new [[ExprConstBool() value=show_disasm]]
        var qres <- move_unquote_block(qblock)
        qres.blockFlags ^= ExprBlockFlags isClosure
        var reg <- setup_call_list("all`things`jit", func.at, true)
        reg.list |> emplace(qres)
        return true

