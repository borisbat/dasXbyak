options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64 public

require jit_x86_64_regs

require daslib/ast_boost
require daslib/strings_boost
require daslib/templates_boost
require math

require dasxbyak/xbyak_boost
require xbyak public
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


let ARG_CMRES             = 24u
let ARG_ARGUMENTS         = 16u
let ARG_CONTEXT           =  8u

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

def mask ( var regs:RegAllocator; maxReg:int )
    var mask = 0u
    for t in range(min(maxReg,length(regs.regs)))
        if regs.regs[t]
            mask |= 1u << uint(t)
    return mask

enum CompareType
    always
    less

def condJump ( var gen:CodeGenerator; lab:string; cond:CompareType )
    if cond==CompareType less
        jl(gen,lab,LabelType T_NEAR)
    else
        panic("unsupported jump {cond}")

def condJumpIfNot ( var gen:CodeGenerator; lab:string; cond:CompareType )
    if cond==CompareType less
        jge(gen,lab,LabelType T_NEAR)
    else
        panic("unsupported jump {cond}")

variant EvResult
    nothing : bool
    stack   : uint
    gpReg   : GpTempReg     // any GP register
    gpRegT  : GpTempReg     // variable replaced via register
    xmmReg  : XmmTempReg
    iconst  : uint64
    cmp     : CompareType

struct Transients
    gp_mask  : uint
    xmm_mask : uint

struct EvContext
    expr_res   : table<uint64; EvResult>
    temp_var   : table<uint64; GpTempReg>
    temp_extra : table<uint64; GpTempReg>
    tf_offset  : table<uint64; uint>
    transients : table<uint64; Transients>
    gpa : RegAllocator
    xmma : RegAllocator
    temp_frame  : uint      // where temp buffers are allocated (like calls)
    stack_frame : uint      // regular stack
    save_frame  : uint      // where transient registers are saved

[macro_function]
def dump ( ctx:EvContext )
    print("stack frame is {ctx.stack_frame}\n")
    print("temp frame is {ctx.temp_frame} bytes\n")
    print("save frame is {ctx.save_frame} bytes\n")
    for k,v in keys(ctx.tf_offset),values(ctx.tf_offset)
        unsafe
            let pexpr = reinterpret<Expression?> k
            let at & = pexpr.at
            let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
            print("\ttemp frame {k}.{pexpr.__rtti} ->  {v} at {fname}:{int(at.line)}:{int(at.column)}\n")
    print("gp temp: {length(ctx.gpa.regs)}\n")
    for t in range(length(ctx.gpa.regs))
        unsafe
            print("\t{reinterpret<GpTempReg> t} {ctx.gpa.freq[t]} times\n")
    print("xmm temp: {length(ctx.xmma.regs)}\n")
    for x in range(length(ctx.xmma.regs))
        unsafe
            print("\t{reinterpret<XmmTempReg> x} {ctx.xmma.freq[x]} times\n")
    print("register allocation:\n")
    for k,v in keys(ctx.expr_res),values(ctx.expr_res)
        unsafe
            let pexpr = reinterpret<Expression?> k
            let at & = pexpr.at
            let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
            print("\t{k}.{pexpr.__rtti} ->  {v} at {fname}:{int(at.line)}:{int(at.column)}\n")

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

[macro_function]
def is_for_range1_with_unused_var ( expr:smart_ptr<ExprFor> )
    if !is_for_range1(expr)
        return false
    let flags = expr.iteratorVariables[0].access_flags
    if !flags.access_ref && !flags.access_get
        return true
    return true

class AllocateRegistersCodeVisitor : AstVisitor
    verbose = true
    put_loop_variables_in_registers = true      // for i in range(blah);    i goes to GpReg
    put_loop_sources_in_registers = true        // for i in range(blah);    range(blah).y goes to GpReg (but only of loop variables are in regs too)
    put_local_variables_in_registers = true     // var i = 5; i ++          i goes to GpReg
    context : EvContext
    [[do_not_delete]] local_stack : array<Variable?>
    local_stack_depth : array<int>
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
        var eV & = context.expr_res[intptr(expr)]
        if eV is nothing
            eV = [[EvResult stack=stack]]
    def evExpectCmp ( expr:ExpressionPtr )
        if verbose
            print("expect results in flags {expr.__rtti}.{intptr(expr)}\n")
        var eV & = context.expr_res[intptr(expr)]
        if eV is nothing
            eV = [[EvResult cmp=CompareType always]]
    def evRelease ( var res:EvResult )
        if res is gpReg
            if verbose
                print("release GP reg {res as gpReg}\n")
            context.gpa |> free(int(res as gpReg))
        elif res is xmmReg
            if verbose
                print("release XMM reg {res as xmmReg}\n")
            context.xmma |> free(int(res as xmmReg))
    def releaseGP ( reg:GpTempReg )
        context.gpa |> free(int(reg))
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
    def allocateTempFrame(bytes:uint)
        let res = context.temp_frame
        context.temp_frame += bytes
        if verbose
            print("allocated temp_frame {bytes} at {res} offset\n")
        return context.stack_frame + res
    def setTransients(expr:smart_ptr<ExprCall>)
        context.transients[intptr(expr)] = [[Transients
            gp_mask = context.gpa |> mask(FIRST_NON_TRANSIENT_GP_TEMP_REG),
            xmm_mask = context.xmma |> mask(FIRST_NON_TRANSIENT_XMM_TEMP_REG)
        ]]
// function
    def override preVisitFunction(fun:FunctionPtr) : void
        context.stack_frame = fun.totalStackSize
    def override visitFunction(fun:FunctionPtr) : FunctionPtr
        let total_xmm_save = length(context.xmma.regs) - FIRST_NON_TRANSIENT_XMM_TEMP_REG
        if total_xmm_save>0
            context.save_frame += uint(total_xmm_save) * 16u
        let total_gp_save = length(context.gpa.regs) - FIRST_NON_TRANSIENT_GP_TEMP_REG
        if total_gp_save>0
            context.save_frame += uint(total_gp_save) * 8u
            if (total_gp_save & 1)!=0
                context.save_frame += 8u
        return fun
// block
    def override preVisitExprBlock(blk:smart_ptr<ExprBlock>) : void
        // keep local variables on local_stack
        local_stack_depth |> push(length(local_stack))
    def override visitExprBlock(blk:smart_ptr<ExprBlock>) : ExpressionPtr
        // restore variable stack
        let lsvd = length(local_stack)
        let lsd = local_stack_depth |> back()
        local_stack_depth |> pop()
        for t in range(lsd,lsvd)
            let pvar = local_stack[t]
            if context.temp_var |> key_exists(intptr(pvar))
                let reg = context.temp_var[intptr(pvar)]
                self->releaseGP(reg)
                if verbose
                    print("{local_stack[t].name} out of scope, {reg}\n")
        local_stack |> resize(lsd)
        return blk
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
        local_stack |> push(get_ptr(arg))
        if !arg._type.isRef
            if arg._type.baseType==Type tInt
                // if its a local variable of the right type, promote to gpReg and done
                let reg = self->allocateGP()
                context.temp_var[intptr(arg)] = reg
                if verbose
                    print("promote {arg.name} to {reg}\n")
                return
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
            if context.temp_var |> key_exists(intptr(expr.variable))
                let reg = context.temp_var[intptr(expr.variable)]
                ev = [[EvResult gpRegT=reg]]
            elif expr.varFlags.r2v
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
        var evOP2 & = context.expr_res[intptr(expr)]
        if expr.left._type.isInteger
            if expr.left._type.baseType==Type tInt
                if expr.left._type.isRef    // +=, -=, and such - were left side is ref
                    // we are done with both sides
                    self->evRelease(evL)
                    self->evRelease(evR)
                else
                    if evOP2 is cmp
                        if expr.op=="<"
                            evOP2 = [[EvResult cmp=CompareType less]]
                        else
                            self->failed("OP2 {expr.op} support cmp result for more operators", expr.at)
                        self->evRelease(evL)
                        self->evRelease(evR)
                    else
                        // imm operators
                        if expr.op=="-" || expr.op=="+" || expr.op=="<"
                            if evL is gpReg                                 // left is reg
                                if (evR is iconst) || (evR is gpReg)        // right is const, or reg
                                    // reuse left register
                                    context.expr_res[intptr(expr)] = evL
                                    // we release only right
                                    self->evRelease(evR)
                                else
                                    self->failed("OP2 {expr.op} int imm gpREG R {debug(evR)}", expr.at)
                            elif evL is gpRegT
                                // we allocate new temp register
                                let nreg = self->allocateGP()
                                evOP2 = [[EvResult gpReg=nreg]]
                                // we release both left and right
                                self->evRelease(evL)
                                self->evRelease(evR)
                                if verbose
                                    print("reg {nreg} for {describe(expr)}\n")
                            else
                                self->failed("OP2 {expr.op} int imm L{evL}", expr.at)
                        else
                            self->failed("OP2 {expr.op} int imm", expr.at)
            else
                self->failed("OP2 {expr.op} int support {describe(expr.left._type)}", expr.at)
        else
            self->failed("OP2 {expr.op} support {describe(expr.left._type)}", expr.at)
        return expr
// op3
    def override preVisitExprOp3(expr:smart_ptr<ExprOp3>): void
        self->evExpectCmp(expr.subexpr)
    def override visitExprOp3(expr:smart_ptr<ExprOp3>) : ExpressionPtr
        // todo: support result type
        var evS & = context.expr_res[intptr(expr.subexpr)]
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        let reg = self->allocateGP()
        context.expr_res[intptr(expr)] = [[EvResult gpReg=reg]]
        if verbose
            print("op3 {evS} ? {evL} : {evR} result in {reg}\n")
        self->evRelease(evS)
        self->evRelease(evL)
        self->evRelease(evR)
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
// for
    def override preVisitExprFor(expr:smart_ptr<ExprFor>) : void
        if put_loop_variables_in_registers
            for v in expr.iteratorVariables
                let reg = self->allocateGP()
                context.temp_var[intptr(v)] = reg
            if put_loop_sources_in_registers
                if is_for_range1(expr)
                    if !is_for_range1_with_unused_var(expr)
                        // if the loop variable is unused, we don't need extra one for the source
                        let reg = self->allocateGP()
                        context.temp_extra[intptr(expr)] = reg
    def override visitExprFor(expr:smart_ptr<ExprFor>) : ExpressionPtr
        if put_loop_variables_in_registers
            for v in expr.iteratorVariables
                if context.temp_var |> key_exists(intptr(v))
                    let reg = context.temp_var[intptr(v)]
                    self->releaseGP(reg)
            if put_loop_sources_in_registers
                if is_for_range1(expr)
                    if !is_for_range1_with_unused_var(expr)
                        let reg = context.temp_extra[intptr(expr)]
                        self->releaseGP(reg)
        // we are done with all sources at this point
        for src in expr.sources
            var evS & = context.expr_res[intptr(src)]
            self->evRelease(evS)
        return expr
// call
    def override visitExprCall(var expr:smart_ptr<ExprCall>) : ExpressionPtr
        if !expr.func.flags.builtIn
            self->setTransients(expr)
            // ok, 2 arguments
            let bytes = uint(length(expr.arguments) * 16)
            let offset = self->allocateTempFrame(bytes)
            context.tf_offset[intptr(expr)] = offset
            if expr.func.flags.copyOnReturn || expr.func.flags.moveOnReturn
                self->failed("support CMRES", expr.at)
            if expr.stackTop != 0u
                self->failed("support cmres? stack top = {expr.stackTop}", expr.at)
            for argi in range(length(expr.arguments))
                self->evExpectStack(expr.arguments[argi],offset+uint(argi)*16u)
            if expr.func.result != null
                if expr.func.result.isRef
                    self->failed("support result by ref", expr.at)
                else
                    var fnR & = context.expr_res[intptr(expr)]
                    if expr.func.result.isVectorType
                        let reg = self->allocateXMM()
                        fnR = [[EvResult xmmReg=reg]]
                    else
                        let reg = self->allocateGP()
                        fnR = [[EvResult gpReg=reg]]
                    if verbose
                        print("call {expr.func._module.name}::{expr.func.name} returns {fnR}\n")
            for arg in expr.arguments
                var eaV & = context.expr_res[intptr(arg)]
                self->evRelease(eaV)
            if verbose
                print("call {expr.func._module.name}::{expr.func.name} temp frame {offset}\n")
            return expr
        ////////////////////
        // TODO: calls table
        let call_name = "{expr.func._module.name}::{expr.func.name}"
        if call_name=="$::range"
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
    context : EvContext
    [[do_not_delete]] this_function : Function?
    func_begin : void?
    def GenerateCodeVisitor(var g:CodeGenerator?; var ctx:EvContext )
        gen = g
        context <- ctx
    def error ( txt:string; at:LineInfo )
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nERROR jit_x86_64(generate): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
    def failed ( txt:string; at:LineInfo )
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nTODO jit_x86_64(generate): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
    def check_gen()
        with_xbyak(gen) <| $ ( GEN )
            var err : GenerationError
            unsafe
                err = reinterpret<GenerationError> GetError()
            if err != GenerationError NONE
                panic("xbyak - generation error {err}")
// ABI
    def getContextOffset
        return context.stack_frame+context.temp_frame+context.save_frame+8u+ARG_CONTEXT
    def getArgOffset
        return context.stack_frame+context.temp_frame+context.save_frame+8u+ARG_ARGUMENTS
    def getCmresOffset
        return context.stack_frame+context.temp_frame+context.save_frame+8u+ARG_CMRES
// function
    def override preVisitFunction(fun:FunctionPtr) : void
        if verbose
            print("(DEF {fun.name} [STACK={context.stack_frame}, TEMP={context.temp_frame}]\n")
        this_function = get_ptr(fun)
        unsafe
            func_begin = *gen |> get_code()
        with_xbyak(gen) <| $ ( GEN )
            // passing (context(rcx) *, arguments(rdx) *, cmres(r8) *)
            mov(qword[rsp+ARG_CMRES],r8)
            mov(qword[rsp+ARG_ARGUMENTS],rdx)
            mov(qword[rsp+ARG_CONTEXT],rcx)
            // save non-transient gp regs
            let total_gp_save = length(context.gpa.regs) - FIRST_NON_TRANSIENT_GP_TEMP_REG
            if total_gp_save>0
                for t in range(total_gp_save)
                    unsafe
                        let gp_reg = reinterpret<GpTempReg> (t + FIRST_NON_TRANSIENT_GP_TEMP_REG)
                        push(REG64(GEN,gp_reg))
                if (total_gp_save & 1) != 0     // align to 16 bytes
                    push(rax)
            // save non-transient xmm regs
            let total_xmm_save = length(context.xmma.regs) - FIRST_NON_TRANSIENT_XMM_TEMP_REG
            if total_xmm_save>0
                for t in range(total_xmm_save)
                    unsafe
                        let xmm_reg = reinterpret<XmmTempReg> (t + FIRST_NON_TRANSIENT_XMM_TEMP_REG)
                        push(REGXMM(GEN,xmm_reg))
            sub(rsp,(context.stack_frame+context.temp_frame+8u))                // note: 8u is here to keep the stack aligned
        self->check_gen()
    def gen_epilogue
        with_xbyak(gen) <| $ ( GEN )
            // note: 8u is here to keep the stack aligned
            add(rsp,(context.stack_frame+context.temp_frame+8u))
            // restore non-transient xmm regs
            let total_xmm_save = length(context.xmma.regs) - FIRST_NON_TRANSIENT_XMM_TEMP_REG
            if total_xmm_save>0
                for t in range(total_xmm_save)
                    unsafe
                        let xmm_reg = reinterpret<XmmTempReg> ((total_xmm_save-t) + FIRST_NON_TRANSIENT_XMM_TEMP_REG)
                        pop(REGXMM(GEN,xmm_reg))
            // restore non-transient gp regs
            let total_gp_save = length(context.gpa.regs) - FIRST_NON_TRANSIENT_GP_TEMP_REG
            if total_gp_save>0
                if (total_gp_save & 1) != 0     // align to 16 bytes
                    pop(rax)
                for t in range(total_gp_save)
                    unsafe
                        let gp_reg = reinterpret<GpTempReg> ((total_gp_save-t-1) + FIRST_NON_TRANSIENT_GP_TEMP_REG)
                        pop(REG64(GEN,gp_reg))
            ret()
        self->check_gen()
    def override visitFunction(fun:FunctionPtr) : FunctionPtr
        self->gen_epilogue()
        self->check_gen()
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
        self->check_gen()
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
            self->check_gen()
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
                if context.temp_var |> key_exists(intptr(arg))
                    let reg = context.temp_var[intptr(arg)]
                    if initSize==4
                        if evI is iconst
                            mov(REG32(GEN,reg),evI as iconst)
                        elif evI is gpReg
                            mov(REG32(GEN,reg),REG32(GEN,evI as gpReg))
                        elif evI is gpRegT
                            mov(REG32(GEN,reg),REG32(GEN,evI as gpRegT))
                        else
                            self->failed("accept reg by ref value init {evI}",arg.init.at)
                    else
                        self->failed("accept reg by ref value init {evI} of type {describe(arg._type)}",arg.init.at)
                else
                    if initSize==4
                        if evI is stack
                            mov(eax,ptr[rsp+(evI as stack)])
                        else
                            self->failed("accept different ref init source {evI}",arg.init.at)
                        mov(ptr[rsp+arg.stackTop],eax)
                    else
                        self->failed("accept different ref init size {initSize}",arg.init.at)
            else
                if context.temp_var |> key_exists(intptr(arg))
                    let reg = context.temp_var[intptr(arg)]
                    if initSize==4
                        if evI is iconst
                            mov(REG32(GEN,reg),evI as iconst)
                        elif evI is gpReg
                            mov(REG32(GEN,reg),REG32(GEN,evI as gpReg))
                        else
                            print("by value init {describe(arg.init)}\n")
                            self->failed("accept reg by value init {evI}",arg.init.at)
                    else
                        self->failed("accept reg by value init {evI} of type {describe(arg._type)}",arg.init.at)
                else
                    self->failed("accept by value init {evI}",arg.init.at)
        self->check_gen()
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
            if expr.varFlags._block
                self->failed("{expr.variable.name} support block variable", expr.at)
            elif expr.varFlags.local
                if context.temp_var |> key_exists(intptr(expr.variable))
                    pass
                elif expr.varFlags.r2v
                    let varSize = expr._type.sizeOf
                    if expr.variable._type |> is_gpreg_type
                        let reg = ev as gpReg
                        if verbose
                            print("[{reg}]")
                        if varSize==8
                            mov(REG64(GEN,reg),qword[rsp+expr.variable.stackTop])
                        elif varSize==4
                            mov(REG32(GEN,reg),dword[rsp+expr.variable.stackTop])
                        else
                            self->failed("{expr.variable.name} support local R2V size of {varSize}", expr.at)
                    else
                        self->failed("{expr.variable.name} support local R2V type {describe(expr.variable._type)}", expr.at)
            elif expr.varFlags.argument
                if expr.varFlags.r2v
                    let varSize = expr._type.sizeOf
                    if expr.variable._type |> is_gpreg_type
                        if ev is gpReg
                            let reg = ev as gpReg
                            if verbose
                                print("[{reg}]")
                            mov(rax,ptr[rsp+self->getArgOffset()])
                            if varSize==8
                                mov(REG64(GEN,reg),qword[rax])
                            elif varSize==4
                                mov(REG32(GEN,reg),dword[rax])
                            else
                                self->failed("{expr.variable.name} support argument R2V size of {varSize}", expr.at)
                        else
                            self->failed("{expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
                    else
                        self->failed("{expr.variable.name} support local R2V type {describe(expr.variable._type)}", expr.at)
                else
                    self->failed("{expr.variable.name} support argument ref", expr.at)
                    // ev = [[EvResult stack=expr.variable.stackTop]]
            else
                self->failed("{expr.variable.name} support that other variable type", expr.at)
        self->check_gen()
        if verbose
            print(")")
        return expr
// op2
    def override preVisitExprOp2(expr:smart_ptr<ExprOp2>): void
        if verbose
            print("(OP2 {expr.op}")
    def override visitExprOp2(expr:smart_ptr<ExprOp2>) : ExpressionPtr
        let evOP2 &  = context.expr_res[intptr(expr)]
        let evL & = context.expr_res[intptr(expr.left)]
        let evR & = context.expr_res[intptr(expr.right)]
        with_xbyak(gen) <| $ ( GEN )
            if expr.left._type.isInteger
                if expr.left._type.baseType==Type tInt
                    if expr.left._type.isRef
                        let pvar = (expr.left is ExprVar) ? get_ptr((expr.left as ExprVar).variable) : null
                        if context.temp_var |> key_exists(intptr(pvar))
                            let reg = context.temp_var[intptr(pvar)]
                            if expr.op=="+="
                                if evR is gpRegT
                                    add(REG32(GEN,reg),REG32(GEN,evR as gpRegT))
                                else
                                    self->failed("OP2 temp {reg} {expr.op} int ref R{evR}", expr.at)
                            else
                                self->failed("OP2 {expr.op} int ref", expr.at)
                        else
                            if expr.op=="+="
                                if evL is stack
                                    if evR is gpReg
                                        add(dword[rsp+(evL as stack)],REG32(GEN,evR as gpReg))
                                    elif evR is gpRegT
                                        add(dword[rsp+(evL as stack)],REG32(GEN,evR as gpRegT))
                                    else
                                        self->failed("OP2 {expr.op} int ref R{evR}", expr.at)
                                else
                                    self->failed("OP2 {expr.op} int ref L{evL}", expr.at)
                            else
                                self->failed("OP2 {expr.op} int ref", expr.at)
                    else
                        if evOP2 is cmp
                            if expr.op=="<"
                                if evL is gpReg
                                    // result is in the left register, which we reused during allocation
                                    if evR is iconst
                                        let ic = uint(evR as iconst)
                                        if expr.op=="<"
                                            cmp(REG32(GEN,evL as gpReg),ic)
                                        else
                                            self->failed("{expr.op} int cmp unsupported here", expr.at)
                                    else
                                        self->failed("OP2 {expr.op} int cmp gpREG R {debug(evR)}", expr.at)
                                    if verbose
                                        print(" [{evL}]")
                            else
                                self->failed("OP2 {expr.op} support more cmp operators", expr.at)
                        else
                            if expr.op=="+" || expr.op=="-" || expr.op=="<"
                                if evL is gpReg
                                    // result is in the left register, which we reused during allocation
                                    if evR is iconst
                                        let ic = uint(evR as iconst)
                                        if ic==1u && (expr.op=="+" || expr.op=="-")
                                            if expr.op=="+"
                                                inc(REG32(GEN,evL as gpReg))
                                            else
                                                dec(REG32(GEN,evL as gpReg))
                                        else
                                            if expr.op=="+"
                                                add(REG32(GEN,evL as gpReg),ic)
                                            elif expr.op=="-"
                                                sub(REG32(GEN,evL as gpReg),ic)
                                            elif expr.op=="<"
                                                cmp(REG32(GEN,evL as gpReg),ic)
                                                mov(REG32(GEN,evL as gpReg),0ul)
                                                mov(eax,1ul)
                                                cmovl(REG32(GEN,evL as gpReg),eax)
                                            else
                                                self->failed("{expr.op} unsupported here", expr.at)
                                    elif evR is gpReg
                                        if expr.op=="+"
                                            add(REG32(GEN,evL as gpReg),REG32(GEN,evR as gpReg))
                                        else
                                            sub(REG32(GEN,evL as gpReg),REG32(GEN,evR as gpReg))
                                    else
                                        self->failed("OP2 {expr.op} int imm gpREG R {debug(evR)}", expr.at)
                                    if verbose
                                        print(" [{evL}]")
                                else
                                    // result is in the result register, which we allocated separately
                                    assert(evOP2 is gpReg)
                                    if (evL is gpReg) && (evR is iconst)
                                        if expr.op=="+"
                                            lea(REG32(GEN,evOP2 as gpReg),ptr[REG32(GEN,(evL as gpReg))+uint(evR as iconst)])
                                        else
                                            lea(REG32(GEN,evOP2 as gpReg),ptr[REG32(GEN,(evL as gpReg))-uint(evR as iconst)])
                                    if (evL is gpRegT) && (evR is iconst)
                                        if expr.op=="+"
                                            lea(REG32(GEN,evOP2 as gpReg),ptr[REG32(GEN,(evL as gpRegT))+uint(evR as iconst)])
                                        else
                                            lea(REG32(GEN,evOP2 as gpReg),ptr[REG32(GEN,(evL as gpRegT))-uint(evR as iconst)])
                                    else
                                        // left
                                        if evL is gpReg
                                            mov(REG32(GEN,evOP2 as gpReg),REG32(GEN,evL as gpReg))
                                        else
                                            self->failed("OP2 {expr.op} int {evOP2} = {evL} {expr.op} R? {evR} {describe(expr)}", expr.at)
                                        // right
                                        if evR is iconst
                                            if expr.op=="+"
                                                add(REG32(GEN,evOP2 as gpReg),uint(evR as iconst))
                                            else
                                                sub(REG32(GEN,evOP2 as gpReg),uint(evR as iconst))
                                        else
                                            self->failed("OP2 {expr.op} int {evOP2} = {evL} {expr.op} R? {evR} {describe(expr)}", expr.at)
                            else
                                self->failed("OP2 {expr.op} int imm", expr.at)
                else
                    self->failed("OP2 {expr.op} int support {describe(expr.left._type)}", expr.at)
            else
                self->failed("OP2 {expr.op} support {describe(expr.left._type)}", expr.at)
        self->check_gen()
        if verbose
            print(")")
        return expr
// op3
    def copyReg32 ( reg:GpTempReg; eV:EvResult; at:LineInfo ) : void
        with_xbyak(gen) <| $ ( GEN )
            if eV is gpReg
                mov(REG32(GEN,reg),REG32(GEN,eV as gpReg))
            else
                self->failed("supprt copy reg32 {eV}", at)
        self->check_gen()
    def override preVisitExprOp3(expr:smart_ptr<ExprOp3>): void
        if verbose
            print("(? ")
    def override preVisitExprOp3Left(expr:smart_ptr<ExprOp3>;left:ExpressionPtr): void
        let evS & = context.expr_res[intptr(expr.subexpr)]
        with_xbyak(gen) <| $ ( GEN )
            if evS is gpReg
                test(REG32(GEN,evS as gpReg),REG32(GEN,evS as gpReg))
                jz(".cond_right_{intptr(expr)}",LabelType T_NEAR)
            elif evS is cmp
                GEN |> condJumpIfNot(".cond_right_{intptr(expr)}",evS as cmp)
            else
                self->failed("supprt cond subexpr in {evS}", expr.at)
        self->check_gen()
        if verbose
            print(" ? ")
    def override preVisitExprOp3Right(expr:smart_ptr<ExprOp3>;right:ExpressionPtr): void
        let eV & = context.expr_res[intptr(expr)]
        let evL & = context.expr_res[intptr(expr.left)]
        with_xbyak(gen) <| $ ( GEN )
            self->copyReg32(eV as gpReg,evL,expr.at)
            jmp(".cond_end_{intptr(expr)}",LabelType T_NEAR)
            L(".cond_right_{intptr(expr)}")
        self->check_gen()
        if verbose
            print(" : ")
    def override visitExprOp3(expr:smart_ptr<ExprOp3>) : ExpressionPtr
        let eV & = context.expr_res[intptr(expr)]
        let evR & = context.expr_res[intptr(expr.right)]
        with_xbyak(gen) <| $ ( GEN )
            self->copyReg32(eV as gpReg,evR,expr.at)
            L(".cond_end_{intptr(expr)}")
        self->check_gen()
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
            let copySize = expr.left._type.sizeOf
            let pvar = (expr.left is ExprVar) ? get_ptr((expr.left as ExprVar).variable) : null
            if context.temp_var |> key_exists(intptr(pvar))
                let reg = context.temp_var[intptr(pvar)]
                if expr.right._type.isRef
                    if copySize==4
                        if evR is gpRegT
                            mov(REG32(GEN,reg),REG32(GEN,evR as gpRegT))
                        else
                            self->failed("copy temp {reg} from {evR}", expr.at)
                    else
                        self->failed("support temp {reg} copy size {copySize}", expr.at)
                    if verbose
                        print("(REF COPY {copySize})")
                else
                    self->failed("support temp {reg} copy VALUE", expr.at)
            else
                if expr.right._type.isRef
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
                    else
                        self->failed("support copy size {copySize}", expr.at)
                    if verbose
                        print("(REF COPY {copySize})")
                else
                    self->failed("support copy VALUE", expr.at)
        self->check_gen()
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
                self->gen_epilogue()
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
                    elif evR is gpRegT
                        movd(xmm0,REG32(GEN,evR as gpRegT))
                    else
                        self->failed("support return {evR}",expr.at)
        self->check_gen()
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
                    let reg & = REGXMM(GEN,evS as xmmReg)
                    if context.temp_var |> key_exists(intptr(expr.iteratorVariables[0]))
                        let RV = context.temp_var[intptr(expr.iteratorVariables[0])]
                        if is_for_range1_with_unused_var(expr)
                            movd(eax,reg)
                            shufps(reg,reg,_MM_SHUFFLE(1,1,1,1))
                            movd(REG32(GEN,RV),reg)
                            sub(REG32(GEN,RV),eax)
                            jle(".for_loop_done_{intptr(expr)}",LabelType T_NEAR)   // verify loop type
                            self->check_gen()
                        else
                            // regular for range-to-range
                            movd(REG32(GEN,RV),reg)
                            shufps(reg,reg,_MM_SHUFFLE(1,1,1,1))
                            if context.temp_extra |> key_exists(intptr(expr))
                                // with loop source is in register
                                let regs = context.temp_extra[intptr(expr)]
                                movd(REG32(GEN,regs),reg)
                                cmp(REG32(GEN,regs),REG32(GEN,RV))
                            else
                                movd(eax,reg)
                                cmp(eax,REG32(GEN,RV))
                            jle(".for_loop_done_{intptr(expr)}",LabelType T_NEAR)
                    else
                        movd(dword[rsp+iSP],reg)
                        shufps(reg,reg,_MM_SHUFFLE(1,1,1,1))
                        movd(eax,reg)
                        cmp(eax,dword[rsp+iSP])
                        jle(".for_loop_done_{intptr(expr)}",LabelType T_NEAR)
                else
                    self->failed("support for_range_1 source {evS}",expr.at)
            self->check_gen()
        if verbose
            print(")")
        return source
    def override preVisitExprForBody(expr:smart_ptr<ExprFor>) : void
        with_xbyak(gen) <| $ ( GEN )
            align(16ul,true)
            L(".for_loop_{intptr(expr)}")
        if verbose
            print("\n")
    def override visitExprFor(expr:smart_ptr<ExprFor>) : ExpressionPtr
        if is_for_range1(expr)
            let evS & = context.expr_res[intptr(expr.sources[0])]
            with_xbyak(gen) <| $ ( GEN )
                let iSP = expr.iteratorVariables[0].stackTop
                if evS is xmmReg
                    if context.temp_var |> key_exists(intptr(expr.iteratorVariables[0]))
                        let RV = context.temp_var[intptr(expr.iteratorVariables[0])]
                        if is_for_range1_with_unused_var(expr)
                            dec(REG32(GEN,RV))
                        else
                            inc(REG32(GEN,RV))
                            if context.temp_extra |> key_exists(intptr(expr))   // check if loop source is in register
                                let regs = context.temp_extra[intptr(expr)]
                                cmp(REG32(GEN,RV),REG32(GEN,regs))
                            else
                                movd(eax,REGXMM(GEN,evS as xmmReg))
                                cmp(REG32(GEN,RV),eax)
                    else
                        inc(dword[rsp+iSP])
                        movd(eax,REGXMM(GEN,evS as xmmReg))
                        cmp(dword[rsp+iSP],eax)
                    jnz(".for_loop_{intptr(expr)}",LabelType T_NEAR)
                else
                    self->failed("support for_range_1 source {evS}",expr.at)
            self->check_gen()
        with_xbyak(gen) <| $ ( GEN )
            L(".for_loop_done_{intptr(expr)}")
        self->check_gen()
        if verbose
            print("{repeat("\t",tab)})")
        return expr
// call
    def override preVisitExprCall(expr:smart_ptr<ExprCall>): void
        if verbose
            print("CALL `{expr.name}` ")
    def override visitExprCall(expr:smart_ptr<ExprCall>) : ExpressionPtr
        if !expr.func.flags.builtIn
            with_xbyak(gen) <| $ ( GEN )
                let offset = context.tf_offset[intptr(expr)]
                for ai in range(length(expr.arguments))
                    let asize = expr.arguments[ai]._type.isRef ? 8 : expr.arguments[ai]._type.sizeOf
                    var eA & = context.expr_res[intptr(expr.arguments[ai])]
                    if eA is gpReg
                        if asize==4
                            mov(dword[rsp+(offset+uint(ai)*16u)],REG32(GEN,eA as gpReg))
                        elif asize==8
                            mov(qword[rsp+(offset+uint(ai)*16u)],REG64(GEN,eA as gpReg))
                        else
                            self->error("TODO: support call argument size {asize}",expr.at)
                    else
                        self->error("TODO: support call argument size {eA}",expr.at)
                var MNH : uint
                unsafe
                    let mangled_name = get_mangled_name(reinterpret<FunctionPtr> expr.func)
                    MNH = hash(mangled_name)
                if verbose
                    print("MNG={MNH} ")
                // save used transient registers
                let transients = context.transients[intptr(expr)]
                var t_offset = 0u
                var t_total = 0
                for t in urange(FIRST_NON_TRANSIENT_GP_TEMP_REG)
                    if (transients.gp_mask & (1u<<t)) != 0u
                        var tgpr : GpTempReg
                        unsafe
                            tgpr = reinterpret<GpTempReg> t
                        push(REG64(GEN,tgpr))
                        t_offset += 8u
                        t_total ++
                if (t_total & 1) != 0
                    push(rax)
                    // lea(rsp,ptr[rsp-8])
                    t_offset += 8u
                var caddr : void?
                if expr.func == this_function
                    // setup arguments
                    let ctx_offset = self->getContextOffset()
                    mov(rcx,qword[rsp+(ctx_offset+t_offset)])   // rcx is Context *
                    lea(rdx,ptr[rsp+(offset+t_offset)])         // rdx is ARGS
                    // sub(r8,r8)                               // r8 is CMRES
                    caddr = func_begin
                else
                    // setup arguments
                    let ctx_offset = self->getContextOffset()
                    mov(rcx,uint64(MNH))                        // rcx is MNH
                    lea(rdx,ptr[rsp+(offset+t_offset)])         // rdx is ARGS
                    mov(r8,ptr[rsp+(ctx_offset+t_offset)])      // r8  is Context *
                    caddr = JIT_call_or_fastcall()
                // do the call
                sub(rsp,32u)
                call(caddr)
                if (t_total & 1) != 0
                    // align used transient registers and restore stack frame
                    add(rsp,40u)
                else
                    // restore stack frame
                    add(rsp,32u)
                // restore used transient registers
                for i_t in urange(FIRST_NON_TRANSIENT_GP_TEMP_REG)
                    let t = uint(FIRST_NON_TRANSIENT_GP_TEMP_REG) - i_t - 1u
                    if (transients.gp_mask & (1u<<t)) != 0u
                        unsafe
                            let tgpr = reinterpret<GpTempReg> t
                            pop(REG64(GEN,tgpr))
                // move result to xmm0
                if expr.func.result != null
                    if expr.func.result.isRef
                        self->failed("support result by ref", expr.at)
                    else
                        var fnR & = context.expr_res[intptr(expr)]
                        let asize = expr.func.result.sizeOf
                        if fnR is gpReg
                            if asize==4
                                movd(REG32(GEN,fnR as gpReg),xmm0)
                            elif asize==8
                                mov(REG64(GEN,fnR as gpReg),xmm0)
                            else
                                self->failed("support result size {asize}", expr.at)
                        else
                            self->failed("support result {fnR}", expr.at)
            self->check_gen()
            return expr
        ////////////////////
        // TODO: calls table
        let call_name = "{expr.func._module.name}::{expr.func.name}"
        if call_name=="$::range"
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
            self->check_gen()
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
    if allocateRegistersVisitor.verbose
        context |> dump
    allocateRegistersVisitorAdapter := null
    unsafe
        delete allocateRegistersVisitor
    // verify GP regs
    let temp_gp = length(context.gpa.regs)
    if temp_gp > MAX_GP_TEMP_REG
        print("jit_x86_64: failed for {func.name}, too many temp gp registers {temp_gp} of {MAX_GP_TEMP_REG}")
        return 0ul
    // verify XMM regis
    let temp_xmm = length(context.xmma.regs)
    if temp_xmm > MAX_XMM_TEMP_REG
        print("jit_x86_64: failed for {func.name}, too many temp xmm registers {temp_xmm} of {MAX_XMM_TEMP_REG}")
        return 0ul
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
        let data = *gen |> get_code()
        let dataLength = *gen |> getSize()
        print("data at {intptr(data)} of {int(dataLength)} bytes\n")
        disassemble(data, dataLength)
        let err = reinterpret<GenerationError> GetError()
        if err != GenerationError NONE
            panic("xbyak - generation error {err}")
    return intptr(gen)

[function_macro(name="jit_x86_64")]
class Jit_x86_64_Macro : AstFunctionAnnotation
    def override apply ( var func:FunctionPtr; var group:ModuleGroup; args:AnnotationArgumentList; var errors : das_string ) : bool
        func.sideEffectFlags |= bitfield(int(SideEffects userScenario))
        let jit_var_name = "{func.name}`jit"
        compiling_module() |> add_global_private_var ( jit_var_name, func.at) <| new [[ExprConstUInt64() value=-1ul]]
        var qblock <- quote() <|
            unsafe
                if PGEN != 0ul
                    *(reinterpret<CodeGenerator?> PGEN) |> instrument_jit(reinterpret<function> PFUN)
        apply_template(qblock) <| $ ( rules )
            rules |> replaceVariable("PGEN") <| new [[ExprVar() name:=jit_var_name]]
            rules |> replaceVariable("PFUN") <| new [[ExprAddr() target:=func.name]]
        var qres <- move_unquote_block(qblock)
        qres.blockFlags ^= ExprBlockFlags isClosure

        // TODO: this to enable installation of jit
        if true
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
