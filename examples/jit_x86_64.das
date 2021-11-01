options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64 public

require jit_x86_64_regs

require daslib/ast_boost
require daslib/strings_boost
require daslib/templates_boost

require dasxbyak/xbyak_boost
require zydis

/*
    STACK FRAME IS
VARIABLE_FRAME
    0   var0
    ...
PROLOGUE
    CONTEXT     8
    ARGUMENTS   8
    CMRES       8
TEMPORARY
    0   temp0
    ...
*/


let GREEDY_TEMP_FRAME_SIZE = 0u

let PROLOGUE_FRAME_SIZE   = 32u
let ARG_CONTEXT           = 8u
let ARG_ARGUMENTS         = 16u
let ARG_CMRES             = 24u

let GP_TEMP_REG_TOTAL = 11

struct RegAllocator
    regs : array<bool>
    freq : array<int>

def free ( var regs:RegAllocator; r:int )
    assert(regs.regs[r]==true)
    regs.regs[r] = false

def allocate ( var regs:RegAllocator )
    let l = length(regs.regs)
    for i in range(l)
        if !regs.regs[i]
            regs.regs[i] = true
            regs.freq[i] ++
            return i
    regs.regs |> push(true)
    regs.freq |> push(1)
    return l

variant EvResult
    nothing : bool
    stack   : uint
    gpReg   : GpTempReg
    xmmReg  : XmmTempReg
    iconst  : uint64

struct EvContext
    expr_res : table<uint64; EvResult>
    gpa : RegAllocator
    xmma : RegAllocator

[macro_function]
def dump ( ctx:EvContext )
    print("register allocation:\n")
    for k,v in keys(ctx.expr_res),values(ctx.expr_res)
        unsafe
            let pexpr = reinterpret<Expression?> k
            let at & = pexpr.at
            let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
            print("{k}.{pexpr.__rtti} ->  {v} at {fname}:{int(at.line)}:{int(at.column)}\n")

[macro_function]
def is_gpreg_type ( t:TypeDeclPtr )
    if length(t.dim)>0
        return false
    if t.isInteger || t.isPointer
        return true
    return true

[macro_function]
def is_for_range1 ( expr:smart_ptr<ExprFor> )
    if length(expr.sources)!=1
        return false
    if length(expr.sources[0]._type.dim)!=0
        return false
    if expr.sources[0]._type.baseType!=Type tRange
        return false
    return true

class AllocateRegistersCodeVisitor : AstVisitor
    verbose = true
    tab : int
    context : EvContext
    def AllocateRegistersCodeVisitor
        pass
    def error ( txt:string; at:LineInfo )
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("ERROR jit_x86_64(allocate_registers): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
    def failed ( txt:string; at:LineInfo )
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("TODO jit_x86_64(allocate_registers): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
    def evExpectStack ( expr:ExpressionPtr; stack:uint )
        if verbose
            print("expect stack {stack} {expr.__rtti}.{intptr(expr)}\n")
        context.expr_res[intptr(expr)] = [[EvResult stack=stack]]
    def evRelease ( var res:EvResult )
        if res is gpReg
            if verbose
                print("release GP reg {res as gpReg}\n")
            context.gpa |> free(int(res as gpReg))
        elif res is xmmReg
            if verbose
                print("release XMM reg {res as xmmReg}\n")
            context.xmma |> free(int(res as xmmReg))
    def allocateGP
        let idx = context.gpa |> allocate()
        unsafe
            let reg = reinterpret<GpTempReg> idx
            if verbose
                print("allocate GP reg {reg}\n")
            return reg
    def allocateXMM
        let idx = context.xmma |> allocate()
        unsafe
            let reg = reinterpret<XmmTempReg> idx
            if verbose
                print("allocate XMM reg {reg}\n")
            return reg
// const int
    def override visitExprConstInt(expr:smart_ptr<ExprConstInt>) : ExpressionPtr
        var ev & = context.expr_res[intptr(expr)]
        if ev is stack
            pass
        else
            ev = [[EvResult iconst=uint64(expr.value)]]
        return expr
// let
    def override preVisitExprLet(expr:smart_ptr<ExprLet>) : void
        pass
    def override visitExprLet(expr:smart_ptr<ExprLet>) : ExpressionPtr
        return expr
    def override preVisitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : void
        // let var = value
        if arg.init != null
            if arg.init._type.isRef
                // we say nothing, and copy from address in gpReg
                pass
            else
                //  we say we expect value on the stack
                self->evExpectStack(arg.init,arg.stackTop)
    def override visitExprLetVariableInit(blk:smart_ptr<ExprLet>;arg:VariablePtr;expr:ExpressionPtr) : ExpressionPtr
        // if result alrady comes on our stack, we are good
        var evI & = context.expr_res[intptr(arg.init)]
        if (evI ?as stack ?? -1u)==arg.stackTop
            return expr
        // after init, we are done with arg.init
        self->evRelease(evI)
        return  expr
// variable
    def override visitExprVar(expr:smart_ptr<ExprVar>) : ExpressionPtr
        var ev & = context.expr_res[intptr(expr)]
        let varSize = expr._type.isRef ? 8 : expr._type.sizeOf
        if expr.varFlags._block
            self->failed("{expr.variable.name} support block variable", expr.at)
        elif expr.varFlags.local    // local varaibels
            if expr.varFlags.r2v
                if expr.variable._type |> is_gpreg_type
                    // return local variable as GP register
                    let reg = self->allocateGP()
                    ev = [[EvResult gpReg=reg]]
                else
                    self->failed("{expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
            else
                // if we are asking for reference, return stack
                ev = [[EvResult stack=expr.variable.stackTop]]
        elif expr.varFlags.argument // arguments
            if expr.varFlags.r2v
                if expr.variable._type |> is_gpreg_type
                    // return local variable as GP register
                    let reg = self->allocateGP()
                    ev = [[EvResult gpReg=reg]]
                else
                    self->failed("{expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
            else
                self->failed("{expr.variable.name} support argument ref", expr.at)
                // ev = [[EvResult stack=expr.variable.stackTop]]
        else
            self->failed("{expr.variable.name} support that other variable type", expr.at)
        return expr
// op2
    def override visitExprOp2(expr:smart_ptr<ExprOp2>) : ExpressionPtr
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        if expr.left._type.isInteger
            if expr.left._type.baseType==Type tInt
                if expr.left._type.isRef    // +=, -=, and such - were left side is ref
                    // we are done with both sides
                    self->evRelease(evL)
                    self->evRelease(evR)
                else
                    if expr.op=="-"                 // imm operators
                        if evL is gpReg             // left is reg
                            if evR is iconst        // right is const
                                // reuse left register
                                context.expr_res[intptr(expr)] = evL
                                self->evRelease(evR)
                            else
                                self->failed("OP2 {expr.op} int imm gpREG R{evR}", expr.at)
                        else
                            self->failed("OP2 {expr.op} int imm L{evL}", expr.at)
                    else
                        self->failed("OP2 {expr.op} int imm", expr.at)
            else
                self->failed("OP2 {expr.op} int support {describe(expr.left._type)}", expr.at)
        else
            self->failed("OP2 {expr.op} support {describe(expr.left._type)}", expr.at)
        return expr
// copy
    def override visitExprCopy(expr:smart_ptr<ExprCopy>) : ExpressionPtr
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        // we are done with both sides
        self->evRelease(evL)
        self->evRelease(evR)
        return expr
// return
    def override visitExprReturn(expr:smart_ptr<ExprReturn>) : ExpressionPtr
        if expr.subexpr!=null
            // if there is return (subexpr), we are done with it
            var evR & = context.expr_res[intptr(expr.subexpr)]
            self->evRelease(evR)
        return expr

    def override visitExprFor(expr:smart_ptr<ExprFor>) : ExpressionPtr
        // we are done with all sources at this point
        for src in expr.sources
            var evS & = context.expr_res[intptr(src)]
            self->evRelease(evS)
        return expr
// call
    def override visitExprCall(expr:smart_ptr<ExprCall>) : ExpressionPtr
        ////////////////////
        // TODO: calls table
        if expr.name=="range"
            assert(length(expr.arguments)==1 && expr.arguments[0]._type.baseType==Type tInt)
            var evA0 & = context.expr_res[intptr(expr.arguments[0])]
            // range returns int2 in xmm register
            let xreg = self->allocateXMM()
            self->evRelease(evA0)
            context.expr_res[intptr(expr)] = [[EvResult xmmReg=xreg]]
        else
            self->failed("support all other functions", expr.at)
        return expr

class GenerateCodeVisitor : AstVisitor
    verbose = true
    tab : int
    [[do_not_delete]] gen : CodeGenerator?
    stack_frame : uint
    temp_frame  : uint
    context : EvContext
    def GenerateCodeVisitor(var g:CodeGenerator?; var ctx:EvContext )
        gen = g
        temp_frame = GREEDY_TEMP_FRAME_SIZE
        context <- ctx
    def error ( txt:string; at:LineInfo )
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nERROR jit_x86_64(generate): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
    def failed ( txt:string; at:LineInfo )
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nTODO jit_x86_64(generate): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
// function
    def override preVisitFunction(fun:FunctionPtr) : void
        stack_frame = fun.totalStackSize
        if verbose
            print("(DEF {fun.name} [STACK={stack_frame}, TEMP={temp_frame}]\n")
        with_xbyak(gen) <| $ ( GEN )
            push(rbx)
            push(rdi)
            push(rsi)
            push(r12)
            push(r13)
            push(r14)
            sub(rsp,(stack_frame+PROLOGUE_FRAME_SIZE+temp_frame))
            mov(qword[rsp+(stack_frame+ARG_CONTEXT)],rcx)
            mov(qword[rsp+(stack_frame+ARG_ARGUMENTS)],rdx)
            mov(qword[rsp+(stack_frame+ARG_CMRES)],r8)
    def override visitFunction(fun:FunctionPtr) : FunctionPtr
        with_xbyak(gen) <| $ ( GEN )
            L(".return")
            add(rsp,(stack_frame+PROLOGUE_FRAME_SIZE+temp_frame))
            pop(r14)
            pop(r13)
            pop(r12)
            pop(rsi)
            pop(rdi)
            pop(rbx)
            ret()
        if verbose
            print(")\n")
        return fun
// const int
    def override preVisitExprConstInt(expr:smart_ptr<ExprConstInt>) : void
        if verbose
            print("(INT32 {expr.value})")
    def override visitExprConstInt(expr:smart_ptr<ExprConstInt>) : ExpressionPtr
        with_xbyak(gen) <| $ ( GEN )
            let ev & = context.expr_res[intptr(expr)]
            if ev is stack
                mov(dword[rsp+(ev as stack)],uint64(expr.value))
        if verbose
            print(")")
        return expr
// let
    def override preVisitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : void
        if verbose
            print("(LET {arg.name} #{arg.stackTop} ")
    def override visitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : VariablePtr
        if arg.init==null
            with_xbyak(gen) <| $ ( GEN )
                let initSize = arg._type.isRef ? 8 : arg._type.sizeOf
                if initSize==4
                    mov(dword[rsp+arg.stackTop],0ul)
                elif initSize==8
                    mov(qword[rsp+arg.stackTop],0ul)
                else
                    self->failed("memzero({arg.name} aka [rsp+{arg.stackTop}],{initSize})",expr.at)
        if verbose
            print(")")
        return arg
    def override visitExprLetVariableInit(blk:smart_ptr<ExprLet>;arg:VariablePtr;expr:ExpressionPtr) : ExpressionPtr
        let evI & = context.expr_res[intptr(arg.init)]
        if (evI ?as stack ?? -1u)==arg.stackTop
            return expr
        with_xbyak(gen) <| $ ( GEN )
            let initSize = arg._type.isRef ? 8 : arg._type.sizeOf
            if arg.init._type.isRef
                if initSize==4
                    if evI is stack
                        mov(eax,ptr[rsp+(evI as stack)])
                    else
                        self->failed("accept different ref init source {evI}",arg.init.at)
                    mov(ptr[rsp+arg.stackTop],eax)
                else
                    self->failed("accept different ref init size {initSize}",arg.init.at)
            else
                self->failed("accept by value init",arg.init.at)
        return  expr
// variable
    def override preVisitExprVar(expr:smart_ptr<ExprVar>) : void
        if verbose
            print("(VAR {expr.name} ")
            if expr.varFlags.r2v
                print("R2V ")
    def override visitExprVar(expr:smart_ptr<ExprVar>) : ExpressionPtr
        let ev & = context.expr_res[intptr(expr)]
        with_xbyak(gen) <| $ ( GEN )
            let varSize = expr._type.isRef ? 8 : expr._type.sizeOf
            if expr.varFlags._block
                self->failed("{expr.variable.name} support block variable", expr.at)
            elif expr.varFlags.local
                if expr.varFlags.r2v
                    if expr.variable._type |> is_gpreg_type
                        let reg = ev as gpReg
                        if verbose
                            print("[{reg}]")
                        if varSize==8
                            mov(REG64(GEN,reg),qword[rsp+expr.variable.stackTop])
                        elif varSize==4
                            mov(REG32(GEN,reg),dword[rsp+expr.variable.stackTop])
                        else
                            self->failed("{expr.variable.name} support argument R2V size of {varSize}", expr.at)
                    else
                        self->failed("{expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
            elif expr.varFlags.argument
                if expr.varFlags.r2v
                    if expr.variable._type |> is_gpreg_type
                        let reg = ev as gpReg
                        if verbose
                            print("[{reg}]")
                        mov(rax,ptr[rsp+(stack_frame+ARG_ARGUMENTS)])
                        if varSize==8
                            mov(REG64(GEN,reg),qword[rax])
                        elif varSize==4
                            mov(REG64(GEN,reg),dword[rax])
                        else
                            self->failed("{expr.variable.name} support argument R2V size of {varSize}", expr.at)
                    else
                        self->failed("{expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
                else
                    self->failed("{expr.variable.name} support argument ref", expr.at)
                    // ev = [[EvResult stack=expr.variable.stackTop]]
            else
                self->failed("{expr.variable.name} support that other variable type", expr.at)
        if verbose
            print(")")
        return expr
// op2
    def override preVisitExprOp2(expr:smart_ptr<ExprOp2>): void
        if verbose
            print("(OP2 {expr.op}")
    def override visitExprOp2(expr:smart_ptr<ExprOp2>) : ExpressionPtr
        let evL & = context.expr_res[intptr(expr.left)]
        let evR & = context.expr_res[intptr(expr.right)]
        with_xbyak(gen) <| $ ( GEN )
            if expr.left._type.isInteger
                if expr.left._type.baseType==Type tInt
                    if expr.left._type.isRef
                        if expr.op=="+="
                            if evL is stack
                                if evR is gpReg
                                    add(dword[rsp+(evL as stack)],REG32(GEN,evR as gpReg))
                                else
                                    self->failed("OP2 {expr.op} int ref R{evR}", expr.at)
                            else
                                self->failed("OP2 {expr.op} int ref L{evL}", expr.at)
                        else
                            self->failed("OP2 {expr.op} int ref", expr.at)
                    else
                        if expr.op=="-"
                            if evL is gpReg
                                if evR is iconst
                                    let ic = uint(evR as iconst)
                                    if ic==1u
                                        dec(REG32(GEN,evL as gpReg))
                                    else
                                        sub(REG32(GEN,evL as gpReg),ic)
                                else
                                    self->failed("OP2 {expr.op} int imm gpREG R{evR}", expr.at)
                                if verbose
                                    print(" [{evL}]")
                            else
                                self->failed("OP2 {expr.op} int imm L{evL}", expr.at)
                        else
                            self->failed("OP2 {expr.op} int imm", expr.at)
                else
                    self->failed("OP2 {expr.op} int support {describe(expr.left._type)}", expr.at)
            else
                self->failed("OP2 {expr.op} support {describe(expr.left._type)}", expr.at)
        if verbose
            print(")")
        return expr
// copy
    def override preVisitExprCopy(expr:smart_ptr<ExprCopy>): void
        if verbose
            print("(COPY")
    def override visitExprCopy(expr:smart_ptr<ExprCopy>) : ExpressionPtr
        let evL & = context.expr_res[intptr(expr.left)]
        let evR & = context.expr_res[intptr(expr.right)]
        if verbose
            print("(EVL={evL},EVR={evR})")
        with_xbyak(gen) <| $ ( GEN )
            if expr.right._type.isRef
                let copySize = expr.left._type.sizeOf
                if copySize==4
                    if evR is gpReg
                        mov(eax,dword[rsp+REG64(GEN,evR as gpReg)])
                    elif evR is stack
                        mov(eax,dword[rsp+(evR as stack)])
                    else
                        self->failed("copy from {evR}", expr.at)
                    if evL is gpReg
                        mov(dword[rsp+REG64(GEN,evL as gpReg)],eax)
                    elif evL is stack
                        mov(dword[rsp+(evL as stack)],eax)
                    else
                        self->failed("copy to {evL}", expr.at)
                if verbose
                    print("(REF COPY {copySize})")
            else
                self->failed("support copy VALUE", expr.at)
        if verbose
            print(")")
        return expr
// return
    def override preVisitExprReturn(expr:smart_ptr<ExprReturn>) : void
        if verbose
            print("(RETURN ")
    def override visitExprReturn(expr:smart_ptr<ExprReturn>) : ExpressionPtr
        if verbose
            print(")")
        with_xbyak(gen) <| $ ( GEN )
            if expr.subexpr==null
                pass
            elif expr.returnFlags.returnReference
                self->failed("support return ref",expr.at)
            elif expr.returnFlags.returnInBlock
                self->failed("support return in block",expr.at)
            else
                let evR & = context.expr_res[intptr(expr.subexpr)]
                if length(expr.subexpr._type.dim)!=0
                    self->error("TODO: support return in block",expr.at)
                if expr.subexpr._type.baseType==Type tInt || expr.subexpr._type.baseType==Type tUInt
                    if evR is gpReg
                        movd(xmm0,REG32(GEN,evR as gpReg))
                    else
                        self->failed("support return {evR}",expr.at)
            jmp(".return",LabelType T_AUTO)
        return expr
// block
    def override preVisitExprBlock(blk:smart_ptr<ExprBlock>) : void
        tab ++
    def override visitExprBlock(blk:smart_ptr<ExprBlock>) : ExpressionPtr
        tab --
        return blk
    def override preVisitExprBlockExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr): void
        if verbose
            print("{repeat("\t",tab)}")
    def override visitExprBlockExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr) : ExpressionPtr
        if verbose
            print("\n")
        return expr
// for
    def override preVisitExprFor(expr:smart_ptr<ExprFor>) : void
        if verbose
            print("(FOR ")
        if is_for_range1(expr)
            pass
        else
            self->failed("support other types of for loop", expr.at)

    def override preVisitExprForVariable(expr:smart_ptr<ExprFor>;svar:VariablePtr;last:bool) : void
        if verbose
            print("`{svar.name}` ")
    def override preVisitExprForSource(expr:smart_ptr<ExprFor>;source:ExpressionPtr;last:bool) : void
        if verbose
            print("(SOURCE ")
    def override visitExprForSource(expr:smart_ptr<ExprFor>;source:ExpressionPtr;last:bool) : ExpressionPtr
        if is_for_range1(expr)
            let evS & = context.expr_res[intptr(source)]
            with_xbyak(gen) <| $ ( GEN )
                let iSP = expr.iteratorVariables[0].stackTop
                if evS is xmmReg
                    movd(dword[rsp+iSP],REGXMM(GEN,evS as xmmReg))
                else
                    self->failed("support for_range_1 source {evS}",expr.at)
        if verbose
            print(")")
        return source
    def override preVisitExprForBody(expr:smart_ptr<ExprFor>) : void
        with_xbyak(gen) <| $ ( GEN )
            let lname = ".for_loop_{intptr(expr)}"
            L(lname)
        if verbose
            print("\n")
    def override visitExprFor(expr:smart_ptr<ExprFor>) : ExpressionPtr
        if is_for_range1(expr)
            let evS & = context.expr_res[intptr(expr.sources[0])]
            with_xbyak(gen) <| $ ( GEN )
                let lname = ".for_loop_{intptr(expr)}"
                let iSP = expr.iteratorVariables[0].stackTop
                if evS is xmmReg
                    movq(rax,REGXMM(GEN,evS as xmmReg))
                    shr(rax,32)
                    inc(dword[rsp+iSP])
                    cmp(dword[rsp+iSP],eax)
                    jnz(lname,LabelType T_AUTO)
                    print("jnz {lname}\n")
                else
                    self->failed("support for_range_1 source {evS}",expr.at)
        if verbose
            print("{repeat("\t",tab)})")
        return expr
// call
    def override preVisitExprCall(expr:smart_ptr<ExprCall>): void
        if verbose
            print("CALL `{expr.name}` ")
    def override visitExprCall(expr:smart_ptr<ExprCall>) : ExpressionPtr
        ////////////////////
        // TODO: calls table
        if expr.name=="range"
            print("RANGE IS {expr.func._module.name}::{expr.func.name}\n")
            assert(length(expr.arguments)==1 && expr.arguments[0]._type.baseType==Type tInt)
            let evA0 & = context.expr_res[intptr(expr.arguments[0])]
            let evR & = context.expr_res[intptr(expr)]
            let xreg = evR as xmmReg
            with_xbyak(gen) <| $ ( GEN )
                if evA0 is gpReg
                    shl(REG64(GEN,evA0 as gpReg),32)
                    movd(REGXMM(GEN,xreg),REG64(GEN,evA0 as gpReg))
                else
                    self->error("TODO: support range(1) argument {evA0}",expr.at)
            if verbose
                print(" [{xreg}]")
        if verbose
            print(")")
        return expr

[macro_function]
def allocate_regs(var func : FunctionPtr)
    var allocateRegistersVisitor = new AllocateRegistersCodeVisitor()
    var allocateRegistersVisitorAdapter <- make_visitor(*allocateRegistersVisitor)
    visit(func, allocateRegistersVisitorAdapter)
    var cont <- allocateRegistersVisitor.context
    allocateRegistersVisitorAdapter := null
    unsafe
        delete allocateRegistersVisitor
    return <- cont

[macro_function]
def public generate_x86_64(var func:FunctionPtr) : uint64
    var allocateRegistersVisitor = new AllocateRegistersCodeVisitor()
    var allocateRegistersVisitorAdapter <- make_visitor(*allocateRegistersVisitor)
    visit(func, allocateRegistersVisitorAdapter)
    var context <- allocateRegistersVisitor.context
    allocateRegistersVisitorAdapter := null
    unsafe
        delete allocateRegistersVisitor
    // generate code
    var gen = new CodeGenerator
    *gen |> inLocalLabel()
    var generateCodeVisitor = new GenerateCodeVisitor(gen,context)
    var generateCodeVisitorAdapter <- make_visitor(*generateCodeVisitor)
    visit(func, generateCodeVisitorAdapter)
    generateCodeVisitorAdapter := null
    *gen |> outLocalLabel()
    unsafe
        delete generateCodeVisitor
    unsafe
        let err = reinterpret<GenerationError> GetError()
        if err != GenerationError NONE
            panic("xbyak - generation error {err}")
        let data = *gen |> get_code()
        let dataLength = *gen |> getSize()
        print("data at {intptr(data)} of {int(dataLength)} bytes\n")
        disassemble(data, dataLength)
    return intptr(gen)

[function_macro(name="jit_x86_64")]
class Jit_x86_64_Macro : AstFunctionAnnotation
    def override apply ( var func:FunctionPtr; var group:ModuleGroup; args:AnnotationArgumentList; var errors : das_string ) : bool
        func.sideEffectFlags |= bitfield(int(SideEffects userScenario))
        let jit_var_name = "{func.name}`jit"
        compiling_module() |> add_global_private_var ( jit_var_name, func.at) <| new [[ExprConstUInt64() value=-1ul]]
        var qblock <- quote() <|
            unsafe
                *(reinterpret<CodeGenerator?> PGEN) |> instrument_jit(reinterpret<function> PFUN)
        apply_template(qblock) <| $ ( rules )
            rules |> replaceVariable("PGEN") <| new [[ExprVar() name:=jit_var_name]]
            rules |> replaceVariable("PFUN") <| new [[ExprAddr() target:=func.name]]
        var qres <- move_unquote_block(qblock)
        qres.blockFlags ^= ExprBlockFlags isClosure
        if true    // TODO: this to enable installation of jit
            var reg <- setup_call_list("all`things`jit", func.at, true)
            reg.list |> emplace(qres)
        return true
    def override finish ( var func:FunctionPtr; var group:ModuleGroup; args,progArgs:AnnotationArgumentList; var errors : das_string ) : bool
        print("jit: {func.name}\n")
        let jit_addr = generate_x86_64(func)
        let jit_var_name = "{func.name}`jit"
        var glob <- find_variable(compiling_module(), jit_var_name)
        if glob != null
            (glob.init as ExprConstUInt64).value = jit_addr
        return true
