options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64 shared public

require daslib/ast_boost
require daslib/strings_boost
require daslib/templates_boost

require dasxbyak/xbyak_boost
require zydis

//
// non-transient registers
//      RBX, RBP, RDI, RSI, RSP, R12, R13, R14, R15, and XMM6-XMM15

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

enum GpTempReg
    // transient
    R8
    R9
    R10
    R11
    // permanent
    RBX
    RDI
    RSI
    R12
    R13
    R14
    R15

struct GpRegAllocator
    reg : bool[GP_TEMP_REG_TOTAL]

def free ( var regs:GpRegAllocator; r:GpTempReg )
    assert(regs.reg[int(r)])
    regs.reg[int(r)] = false

def allocate ( var regs:GpRegAllocator )
    for r,i in regs.reg,range(GP_TEMP_REG_TOTAL)
        if !r
            r = true
            unsafe
                return reinterpret<GpTempReg> i
    panic("out of registers")
    return GpTempReg R8

def REG32 ( var gen:CodeGenerator; r:GpTempReg ) : Reg32 const &
    unsafe
        if r==GpTempReg R8
            return gen.r8d
        elif r==GpTempReg R9
            return gen.r9d
        elif r==GpTempReg R10
            return gen.r10d
        elif r==GpTempReg R11
            return gen.r11d
        elif r==GpTempReg RBX
            return gen.ebx
        elif r==GpTempReg RDI
            return gen.edi
        elif r==GpTempReg RSI
            return gen.esi
        elif r==GpTempReg R12
            return gen.r12d
        elif r==GpTempReg R13
            return gen.r13d
        elif r==GpTempReg R14
            return gen.r14d
        elif r==GpTempReg R15
            return gen.r15d
        else
            return gen.eax

def REG64 ( var gen:CodeGenerator; r:GpTempReg ) : Reg64 const &
    unsafe
        if r==GpTempReg R8
            return gen.r8
        elif r==GpTempReg R9
            return gen.r9
        elif r==GpTempReg R10
            return gen.r10
        elif r==GpTempReg R11
            return gen.r11
        elif r==GpTempReg RBX
            return gen.rbx
        elif r==GpTempReg RDI
            return gen.rdi
        elif r==GpTempReg RSI
            return gen.rsi
        elif r==GpTempReg R12
            return gen.r12
        elif r==GpTempReg R13
            return gen.r13
        elif r==GpTempReg R14
            return gen.r14
        elif r==GpTempReg R15
            return gen.r15
        else
            return gen.rax


let XMM_TEMP_REG_TOTAL = 6

enum XmmTempReg
    XMM0
    XMM1
    XMM2
    XMM3
    XMM4
    XMM5

struct XmmRegAllocator
    reg : bool[XMM_TEMP_REG_TOTAL]

def free ( var regs:XmmRegAllocator; r:XmmTempReg )
    assert(regs.reg[int(r)])
    regs.reg[int(r)] = false

def allocate ( var regs:XmmRegAllocator )
    for r,i in regs.reg,range(GP_TEMP_REG_TOTAL)
        if !r
            r = true
            unsafe
                return reinterpret<XmmTempReg> i
    panic("out of registers")
    return XmmTempReg XMM0

def REGXMM ( var gen:CodeGenerator; r:XmmTempReg ) : Xmm const &
    unsafe
        if r==XmmTempReg XMM0
            return gen.xmm0
        elif r==XmmTempReg XMM1
            return gen.xmm1
        elif r==XmmTempReg XMM2
            return gen.xmm2
        elif r==XmmTempReg XMM3
            return gen.xmm3
        elif r==XmmTempReg XMM4
            return gen.xmm4
        elif r==XmmTempReg XMM5
            return gen.xmm5
        else
            return gen.xmm0

variant EvResult
    nothing : bool
    stack   : uint
    gpReg   : GpTempReg
    xmmReg  : XmmTempReg
    iconst  : uint64

struct EvContext
    expr_res : table<uint64; EvResult>

[macro_function]
def is_gpreg_type ( t:TypeDeclPtr )
    if length(t.dim)>0
        return false
    if t.isInteger || t.isPointer
        return true
    return true

class GenerateCodeVisitor : AstVisitor
    verbose = true
    tab : int
    [[do_not_delete]] gen : CodeGenerator?
    stack_frame : uint
    temp_frame  : uint
    context : EvContext
    gpa : GpRegAllocator
    xmma : XmmRegAllocator
    def GenerateCodeVisitor(var g:CodeGenerator?)
        gen = g
        temp_frame = GREEDY_TEMP_FRAME_SIZE
    def error ( txt:string; at:LineInfo )
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nERROR jit_x86_64: {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
    def evExpectStack ( expr:ExpressionPtr; stack:uint )
        if verbose
            print("(?#{stack} {expr.__rtti}.{intptr(expr)}) ")
        context.expr_res[intptr(expr)] = [[EvResult stack=stack]]
    def evRelease ( var res:EvResult )
        if res is gpReg
            gpa |> free(res as gpReg)
        elif res is xmmReg
            xmma |> free(res as xmmReg)
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
        var ev & = context.expr_res[intptr(expr)]
        with_xbyak(gen) <| $ ( GEN )
            if ev is stack
                let ofs = ev as stack
                mov(dword[rsp+ofs],uint64(expr.value))
            else
                ev = [[EvResult iconst=uint64(expr.value)]]
        return expr
// let
    def override preVisitExprLet(expr:smart_ptr<ExprLet>) : void
        pass
    def override visitExprLet(expr:smart_ptr<ExprLet>) : ExpressionPtr
        return expr
    def override preVisitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : void
        if verbose
            print("(VAR {arg.name} #{arg.stackTop} ")
            if arg.init != null
                if arg.init._type.isRef
                    print("& ")
                else
                    self->evExpectStack(arg.init,arg.stackTop)
    def override visitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : VariablePtr
        if verbose
            if arg.init==null
                let initSize = arg._type.isRef ? 8 : arg._type.sizeOf
                with_xbyak(gen) <| $ ( GEN )
                    if initSize==4
                        mov(dword[rsp+arg.stackTop],0ul)
                    elif initSize==8
                        mov(qword[rsp+arg.stackTop],0ul)
                    else
                        self->error("TODO: memzero({arg.name} aka [rsp+{arg.stackTop}],{initSize})",expr.at)
            print(")")
        return arg
    def override preVisitExprLetVariableInit(blk:smart_ptr<ExprLet>;arg:VariablePtr;expr:ExpressionPtr): void
        pass
    def override visitExprLetVariableInit(blk:smart_ptr<ExprLet>;arg:VariablePtr;expr:ExpressionPtr) : ExpressionPtr
        var icv & = context.expr_res[intptr(arg.init)]
        if (icv ?as stack ?? -1u)==arg.stackTop
            return expr
        var evI & = context.expr_res[intptr(arg.init)]
        let initSize = arg._type.isRef ? 8 : arg._type.sizeOf
        with_xbyak(gen) <| $ ( GEN )
            if arg.init._type.isRef
                if initSize==4
                    if evI is stack
                        mov(eax,ptr[rsp+(evI as stack)])
                    else
                        self->error("TODO: accept different ref init source {evI}",arg.init.at)
                    mov(ptr[rsp+arg.stackTop],eax)
                else
                    self->error("TODO: accept different ref init size {initSize}",arg.init.at)
            else
                self->error("TODO: accept by value init",arg.init.at)
        self->evRelease(evI)
        return  expr
// variable
    def override preVisitExprVar(expr:smart_ptr<ExprVar>) : void
        if verbose
            print("(VAR {expr.name} ")
            if expr.varFlags.r2v
                print("R2V ")
    def override visitExprVar(expr:smart_ptr<ExprVar>) : ExpressionPtr
        var ev & = context.expr_res[intptr(expr)]
        let varSize = expr._type.isRef ? 8 : expr._type.sizeOf
        with_xbyak(gen) <| $ ( GEN )
            if expr.varFlags._block
                self->error("TODO: {expr.variable.name} support block variable", expr.at)
            elif expr.varFlags.local
                if expr.varFlags.r2v
                    if expr.variable._type |> is_gpreg_type
                        let reg = gpa |> allocate()
                        if verbose
                            print("[{reg}]")
                        ev = [[EvResult gpReg=reg]]
                        if varSize==8
                            mov(REG64(GEN,reg),qword[rsp+expr.variable.stackTop])
                        elif varSize==4
                            mov(REG32(GEN,reg),dword[rsp+expr.variable.stackTop])
                        else
                            self->error("TODO: {expr.variable.name} support argument R2V size of {varSize}", expr.at)
                    else
                        self->error("TODO: {expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
                    //self->error("TODO: {expr.variable.name} support local R2V", expr.at)
                else
                    ev = [[EvResult stack=expr.variable.stackTop]]
            elif expr.varFlags.argument
                if expr.varFlags.r2v
                    if expr.variable._type |> is_gpreg_type
                        let reg = gpa |> allocate()
                        if verbose
                            print("[{reg}]")
                        ev = [[EvResult gpReg=reg]]
                        mov(rax,ptr[rsp+(stack_frame+ARG_ARGUMENTS)])
                        if varSize==8
                            mov(REG64(GEN,reg),qword[rax])
                        elif varSize==4
                            mov(REG64(GEN,reg),dword[rax])
                        else
                            self->error("TODO: {expr.variable.name} support argument R2V size of {varSize}", expr.at)
                    else
                        self->error("TODO: {expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
                else
                    self->error("TODO: {expr.variable.name} support argument ref", expr.at)
                    // ev = [[EvResult stack=expr.variable.stackTop]]
            else
                self->error("TODO: {expr.variable.name} support that other variable type", expr.at)
        if verbose
            print(")")
        return expr
// op2
    def override preVisitExprOp2(expr:smart_ptr<ExprOp2>): void
        if verbose
            print("(OP2 {expr.op}")
    def override visitExprOp2(expr:smart_ptr<ExprOp2>) : ExpressionPtr
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        with_xbyak(gen) <| $ ( GEN )
            if expr.left._type.isInteger
                if expr.left._type.baseType==Type tInt
                    if expr.left._type.isRef
                        if expr.op=="+="
                            if evL is stack
                                if evR is gpReg
                                    add(dword[rsp+(evL as stack)],REG32(GEN,evR as gpReg))
                                else
                                    self->error("TODO: OP2 {expr.op} int ref R{evR}", expr.at)
                            else
                                self->error("TODO: OP2 {expr.op} int ref L{evL}", expr.at)
                        else
                            self->error("TODO: OP2 {expr.op} int ref", expr.at)
                        self->evRelease(evL)
                        self->evRelease(evR)
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
                                    self->error("TODO: OP2 {expr.op} int imm gpREG R{evR}", expr.at)
                                context.expr_res[intptr(expr)] = evL
                                self->evRelease(evR)
                                if verbose
                                    print(" [{evL}]")
                            else
                                self->error("TODO: OP2 {expr.op} int imm L{evL}", expr.at)
                        else
                            self->error("TODO: OP2 {expr.op} int imm", expr.at)
                else
                    self->error("TODO: OP2 {expr.op} int support {describe(expr.left._type)}", expr.at)
            else
                self->error("TODO: OP2 {expr.op} support {describe(expr.left._type)}", expr.at)
        if verbose
            print(")")
        return expr
// copy
    def override preVisitExprCopy(expr:smart_ptr<ExprCopy>): void
        if verbose
            print("(COPY")
    def override visitExprCopy(expr:smart_ptr<ExprCopy>) : ExpressionPtr
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
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
                        self->error("TODO: copy from {evR}", expr.at)
                    if evL is gpReg
                        mov(dword[rsp+REG64(GEN,evL as gpReg)],eax)
                    elif evL is stack
                        mov(dword[rsp+(evL as stack)],eax)
                    else
                        self->error("TODO: copy to {evL}", expr.at)
                if verbose
                    print("(REF COPY {copySize})")
            else
                self->error("TODO: support copy VALUE", expr.at)
        self->evRelease(evL)
        self->evRelease(evR)
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
                self->error("TODO: support return ref",expr.at)
            elif expr.returnFlags.returnInBlock
                self->error("TODO: support return in block",expr.at)
            else
                var evR & = context.expr_res[intptr(expr.subexpr)]
                if length(expr.subexpr._type.dim)!=0
                    self->error("TODO: support return in block",expr.at)
                if expr.subexpr._type.baseType==Type tInt || expr.subexpr._type.baseType==Type tUInt
                    if evR is gpReg
                        movd(xmm0,REG32(GEN,evR as gpReg))
                    else
                        self->error("TODO: support return {evR}",expr.at)
                self->evRelease(evR)
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
        /*
    def override preVisitExprBlockArgument(blk:smart_ptr<ExprBlock>;arg:VariablePtr;lastArg:bool): void
    def override visitExprBlockArgument(blk:smart_ptr<ExprBlock>;arg:VariablePtr;lastArg:bool) : VariablePtr
    def override preVisitExprBlockArgumentInit(blk:smart_ptr<ExprBlock>;arg:VariablePtr;expr:ExpressionPtr): void
    def override visitExprBlockArgumentInit(blk:smart_ptr<ExprBlock>;arg:VariablePtr;expr:ExpressionPtr) : ExpressionPtr
    def override preVisitExprBlockFinal(blk:smart_ptr<ExprBlock>): void
    def override visitExprBlockFinal(blk:smart_ptr<ExprBlock>): void
    def override preVisitExprBlockFinalExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr): void
    def override visitExprBlockFinalExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr) : ExpressionPtr
        */
// for
    def override preVisitExprFor(expr:smart_ptr<ExprFor>) : void
        if verbose
            print("(FOR ")
        assert(length(expr.sources)==1)
        assert(expr.sources[0]._type.baseType==Type tRange)
    def override preVisitExprForVariable(expr:smart_ptr<ExprFor>;svar:VariablePtr;last:bool) : void
        if verbose
            print("`{svar.name}` ")
/*
    def override visitExprForVariable(expr:smart_ptr<ExprFor>;svar:VariablePtr;last:bool) : VariablePtr
*/
    def override preVisitExprForSource(expr:smart_ptr<ExprFor>;source:ExpressionPtr;last:bool) : void
        if verbose
            print("(SOURCE ")
    def override visitExprForSource(expr:smart_ptr<ExprFor>;source:ExpressionPtr;last:bool) : ExpressionPtr
        // range(1)
        var evS & = context.expr_res[intptr(source)]
        with_xbyak(gen) <| $ ( GEN )
            let iSP = expr.iteratorVariables[0].stackTop
            if evS is xmmReg
                movd(dword[rsp+iSP],REGXMM(GEN,evS as xmmReg))
            else
                self->error("TODO: support for source {evS}",expr.at)
        if verbose
            print(")")
        return source
/*
    def override preVisitExprForStack(expr:smart_ptr<ExprFor>) : void
*/
    def override preVisitExprForBody(expr:smart_ptr<ExprFor>) : void
        let lname = ".for_loop_{intptr(expr)}"
        with_xbyak(gen) <| $ ( GEN )
            L(lname)
        if verbose
            print("\n")
    def override visitExprFor(expr:smart_ptr<ExprFor>) : ExpressionPtr
        // range(1)
        var evS & = context.expr_res[intptr(expr.sources[0])]
        let lname = ".for_loop_{intptr(expr)}"
        with_xbyak(gen) <| $ ( GEN )
            let iSP = expr.iteratorVariables[0].stackTop
            if evS is xmmReg
                movq(rax,REGXMM(GEN,evS as xmmReg))
                shr(rax,32)
                inc(dword[rsp+iSP])
                cmp(dword[rsp+iSP],eax)
                jnz(lname,LabelType T_AUTO)
                print("jnz {lname}\n")
            else
                self->error("TODO: support for source {evS}",expr.at)
        self->evRelease(evS)
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
            assert(length(expr.arguments)==1 && expr.arguments[0]._type.baseType==Type tInt)
            var evA0 & = context.expr_res[intptr(expr.arguments[0])]
            let xreg = xmma |> allocate()
            with_xbyak(gen) <| $ ( GEN )
                if evA0 is gpReg
                    shl(REG64(GEN,evA0 as gpReg),32)
                    movd(REGXMM(GEN,xreg),REG64(GEN,evA0 as gpReg))
                else
                    self->error("TODO: support range(1) argument {evA0}",expr.at)
            self->evRelease(evA0)
            context.expr_res[intptr(expr)] = [[EvResult xmmReg=xreg]]
            if verbose
                print(" [{xreg}]")
        if verbose
            print(")")
        return expr
/*
    def override preVisitExprCallArgument(expr:smart_ptr<ExprCall>;arg:ExpressionPtr;last:bool): void
    def override visitExprCallArgument(expr:smart_ptr<ExprCall>;arg:ExpressionPtr;last:bool) : ExpressionPtr
*/


[macro_function]
def public generate_x86_64(var func:FunctionPtr) : uint64
    var gen = new CodeGenerator
    *gen |> inLocalLabel()
    var astVisitor = new GenerateCodeVisitor(gen)
    var astVisitorAdapter <- make_visitor(*astVisitor)
    visit(func, astVisitorAdapter)
    astVisitorAdapter := null
    *gen |> outLocalLabel()
    unsafe
        delete astVisitor
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
        var reg <- setup_call_list("all`things`jit", func.at, true)
        reg.list |> emplace(qres)
        return true
    def override finish ( var func:FunctionPtr; var group:ModuleGroup; args,progArgs:AnnotationArgumentList; var errors : das_string ) : bool
        print("jit: {func.name}\n")
        let jit_addr = generate_x86_64(func)
        let jit_var_name = "{func.name}`jit"
        var glob <- find_variable(compiling_module(), jit_var_name)
        (glob.init as ExprConstUInt64).value = jit_addr
        return true
