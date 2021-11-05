options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64_alloc_regs shared public

require jit_x86_64_regs
require jit_x86_64_common

require daslib/ast_boost
require daslib/strings_boost
require daslib/templates_boost
require math

require dasxbyak/xbyak_boost
require xbyak public

require ast public

class AllocateRegistersCodeVisitor : JitVisitor
    put_loop_variables_in_registers  : bool = true      // for i in range(blah);    i goes to GpReg
    put_loop_sources_in_registers    : bool = true      // for i in range(blah);    range(blah).y goes to GpReg (but only of loop variables are in regs too)
    put_local_variables_in_registers : bool = true      // var i = 5; i ++          i goes to GpReg
    [[do_not_delete]] local_stack : array<Variable?>
    local_stack_depth : array<int>
    [[do_not_delete]] this_function : Function?
    def AllocateRegistersCodeVisitor ( var ctx:EvContext )
        JitVisitor`JitVisitor(self, ctx)
    def evExpectStack ( expr:ExpressionPtr; stack:uint; at:LineInfo )
        logAt("expect stack {stack} {expr.__rtti}.{intptr(expr)}", at)
        var eV & = context.expr_res[intptr(expr)]
        if eV is nothing
            eV = [[EvResult stack=stack]]
    def evExpectCmp ( expr:ExpressionPtr; at:LineInfo )
        logAt("expect results in flags {expr.__rtti}.{intptr(expr)}", at)
        var eV & = context.expr_res[intptr(expr)]
        if eV is nothing
            eV = [[EvResult cmp=CompareType always]]
    def evRelease ( var res:EvResult; at:LineInfo )
        if res is gpReg
            logAt("release GP reg {res as gpReg}",at)
            context.gpa |> free(int(res as gpReg))
        elif res is xmmReg
            logAt("release XMM reg {res as xmmReg}",at)
            context.xmma |> free(int(res as xmmReg))
    def releaseGP ( reg:GpTempReg; at:LineInfo )
        logAt("releaseGP {reg}",at)
        context.gpa |> free(int(reg))
    def allocateGP ( at:LineInfo )
        let idx = context.gpa |> allocate()
        unsafe
            let reg = reinterpret<GpTempReg> idx
            logAt("allocate GP reg {reg}",at)
            return reg
    def allocateXMM ( at:LineInfo )
        let idx = context.xmma |> allocate()
        unsafe
            let reg = reinterpret<XmmTempReg> idx
            logAt("allocate XMM reg {reg}", at)
            return reg
    def allocateTempFrame(bytes:uint)       // TODO: allow 'free' of temp frame?
        let res = context.temp_frame
        context.temp_frame += bytes
        log("allocated temp_frame {bytes} at {res} offset\n")
        return context.stack_frame + res
    def setTransients(expr:smart_ptr<ExprCall>)
        context.transients[intptr(expr)] = [[Transients
            gp_mask = context.gpa |> mask(FIRST_NON_TRANSIENT_GP_TEMP_REG),
            xmm_mask = context.xmma |> mask(FIRST_NON_TRANSIENT_XMM_TEMP_REG)
        ]]
    def acceptConstR64 ( expr:smart_ptr<Expression>; value:uint64 )
        var ev & = context.expr_res[intptr(expr)]
        if !(ev is stack)
            ev = [[EvResult iconst=value]]
        return expr
// function
    def override preVisitFunction(fun:FunctionPtr) : void
        this_function = get_ptr(fun)
        context.stack_frame = fun.totalStackSize
    def override visitFunction(fun:FunctionPtr) : FunctionPtr
        let total_xmm_save = length(context.xmma.regs) - FIRST_NON_TRANSIENT_XMM_TEMP_REG
        if total_xmm_save>0
            // save_frame has all extra non-transient xmm registers - 16 bytes each
            context.save_frame += uint(total_xmm_save) * 16u
        let total_gp_save = length(context.gpa.regs) - FIRST_NON_TRANSIENT_GP_TEMP_REG
        if total_gp_save>0
            // save frame has all extra gp non-transient GP registers - 8 bytes each, total aligned to 16
            context.save_frame += uint(total_gp_save) * 8u
            if (total_gp_save & 1)!=0
                context.save_frame += 8u
        return fun
// block
    def override preVisitExprBlock(blk:smart_ptr<ExprBlock>) : void
        // keep local variables on local_stack
        local_stack_depth |> push(length(local_stack))
    def override visitExprBlockExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr) : ExpressionPtr
        var topE & = context.expr_res[intptr(expr)]
        evRelease(topE,expr.at)
        return expr
    def override visitExprBlock(blk:smart_ptr<ExprBlock>) : ExpressionPtr
        // restore variable stack
        let lsvd = length(local_stack)
        let lsd = local_stack_depth |> back()
        local_stack_depth |> pop()
        for t in range(lsd,lsvd)
            let pvar = local_stack[t]
            // TODO: release GP variables on the last use, not on the block end
            if context.temp_var |> key_exists(intptr(pvar))
                let reg = context.temp_var[intptr(pvar)]
                releaseGP(reg,blk.at)
                log("{local_stack[t].name} out of scope, {reg}\n")
        local_stack |> resize(lsd)
        return blk
// const int
    def override visitExprConstInt(expr:smart_ptr<ExprConstInt>) : ExpressionPtr
        acceptConstR64(expr,uint64(expr.value))
        return expr
// const bool
    def override visitExprConstBool(expr:smart_ptr<ExprConstBool>) : ExpressionPtr
        acceptConstR64(expr,expr.value ? 1ul : 0ul)
        return expr
// let
    def override preVisitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : void
        local_stack |> push(get_ptr(arg))
        if !arg._type.isRef
            if arg._type |> is_gpreg_type
                // if its a local variable of the right type, promote to gpReg and done
                let reg = allocateGP(expr.at)
                context.temp_var[intptr(arg)] = reg
                log("promote {arg.name} to {reg}\n")
                return
            else
                failed("ExprLetVariable !arg._type.isRef, {describe(arg._type)}", expr.at)
        // let var = value
        if arg.init != null
            if arg.init._type.isRef
                // we say nothing, and copy from address in gpReg
                pass
            else
                //  we say we expect value on the stack
                evExpectStack(arg.init,arg.stackTop,expr.at)
    def override visitExprLetVariableInit(blk:smart_ptr<ExprLet>;arg:VariablePtr;expr:ExpressionPtr) : ExpressionPtr
        // if result alrady comes on our stack, we are good
        var evI & = context.expr_res[intptr(arg.init)]
        if (evI ?as stack ?? -1u)==arg.stackTop
            return expr
        // after init, we are done with arg.init
        evRelease(evI,expr.at)
        return  expr
// variable
    def override visitExprVar(expr:smart_ptr<ExprVar>) : ExpressionPtr
        var ev & = context.expr_res[intptr(expr)]
        let varSize = expr._type.isRef ? 8 : expr._type.sizeOf
        if expr.varFlags._block
            failed("{expr.variable.name} support block variable", expr.at)
        elif expr.varFlags.local    // local varaibels
            if context.temp_var |> key_exists(intptr(expr.variable))
                let reg = context.temp_var[intptr(expr.variable)]
                ev = [[EvResult gpRegT=reg]]
            elif expr.varFlags.r2v
                if expr.variable._type |> is_gpreg_type
                    // return local variable as GP register
                    let reg = allocateGP(expr.at)
                    ev = [[EvResult gpReg=reg]]
                else
                    failed("ExprLetVariable expr.varFlags.local expr.varFlags.r2v, {expr.variable.name} : {describe(expr.variable._type)}", expr.at)
            else
                // if we are asking for reference, return stack
                ev = [[EvResult stack=expr.variable.stackTop]]
        elif expr.varFlags.argument // arguments
            context.use_args = true
            if expr.varFlags.r2v
                if expr.variable._type |> is_gpreg_type
                    // return local variable as GP register
                    let reg = allocateGP(expr.at)
                    ev = [[EvResult gpReg=reg]]
                else
                    failed("ExprLetVariable expr.varFlags.argument expr.varFlags.r2v, {expr.variable.name} : {describe(expr.variable._type)}", expr.at)
            else
                // TODO: do we need 'argument' ref type?
                let reg = allocateGP(expr.at)
                ev = [[EvResult gpReg=reg]]
        else
            failed("ExprLetVariable {expr.variable.name} : {describe(expr.variable._type)}", expr.at)
        return expr
// op1
    def override visitExprOp1(expr:smart_ptr<ExprOp1>) : ExpressionPtr
        var ev & = context.expr_res[intptr(expr.subexpr)]
        var evOP1 & = context.expr_res[intptr(expr)]
        if expr.subexpr._type.isWorkhorseType
            if expr.subexpr._type |> is_gpreg_type
                if expr.op=="++" || expr.op=="+++" || expr.op=="--" || expr.op=="---"
                    if (ev is gpRegT) && (expr.op=="++" || expr.op=="--")
                        // if its temp variable, and its pre-inc and pre-dec - result is that variable
                        log("{expr.op} prefix result stays in {ev}\n")
                        evOP1 = ev
                    elif ev is gpReg
                        // if subexpr is register, we reuse it as a result
                        evOP1 = ev
                    else
                        // we allocate new register for result
                        evRelease(ev,expr.at)
                        let reg = allocateGP(expr.at)
                        evOP1 = [[EvResult gpReg=reg]]
            else
                failed("ExprOp1 {expr.op} expr.subexpr._type.isWorkhorseType {describe(expr.subexpr._type)}", expr.at)
        else
            failed("ExprOp1 {expr.op} {describe(expr.subexpr._type)}", expr.at)
        return expr
// op2
    def override visitExprOp2(expr:smart_ptr<ExprOp2>) : ExpressionPtr
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        var evOP2 & = context.expr_res[intptr(expr)]
        if expr.left._type.isWorkhorseType
            if expr.left._type |> is_gpreg_type
                if expr.left._type.isRef    // +=, -=, and such - were left side is ref
                    // we are done with both sides
                    evRelease(evL,expr.at)
                    evRelease(evR,expr.at)
                else
                    if evOP2 is cmp
                        if expr.op=="<"
                            evOP2 = [[EvResult cmp=CompareType less]]
                        elif expr.op=="=="
                            evOP2 = [[EvResult cmp=CompareType equals]]
                        else
                            failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType  expr.left._type.isRef (evOP2 is cmp)", expr.at)
                        evRelease(evL,expr.at)
                        evRelease(evR,expr.at)
                    else
                        // imm operators
                        if expr.op=="-" || expr.op=="+" || expr.op=="*" || expr.op=="/" || expr.op=="%" || expr.op=="<" || expr.op=="=="
                            if expr.op=="%" || expr.op=="/"                 // this operators require context for the exceptions
                                context.use_context = true
                            if evL is gpReg                                             // left is reg
                                if (evR is iconst) || (evR is gpReg) || (evR is gpRegT) // right is const, or reg
                                    // reuse left register
                                    context.expr_res[intptr(expr)] = evL
                                    // we release only right
                                    evRelease(evR,expr.at)
                                else
                                    failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType evL is gpReg right={evR}", expr.at)
                            elif evL is gpRegT
                                // we allocate new temp register
                                let nreg = allocateGP(expr.at)
                                evOP2 = [[EvResult gpReg=nreg]]
                                // we release both left and right
                                evRelease(evL,expr.at)
                                evRelease(evR,expr.at)
                                log("reg {nreg} for {describe(expr)}\n")
                            else
                                failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType left={evL} right={evR}", expr.at)
                        else
                            failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType", expr.at)
            else
                failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType {describe(expr.left._type)}", expr.at)
        else
            failed("ExprOp2 {expr.op} {describe(expr.left._type)}", expr.at)
        return expr
// if-then-else
    def override preVisitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>) : void
        evExpectCmp(expr.cond,expr.cond.at)
    def override visitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>) : ExpressionPtr
        var evCond & = context.expr_res[intptr(expr.cond)]
        evRelease(evCond,expr.at)
        return expr
// op3
    def override preVisitExprOp3(expr:smart_ptr<ExprOp3>): void
        evExpectCmp(expr.subexpr,expr.at)
    def override visitExprOp3(expr:smart_ptr<ExprOp3>) : ExpressionPtr
        // TODO: support result type
        var evS & = context.expr_res[intptr(expr.subexpr)]
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        var evOP3 & = context.expr_res[intptr(expr)]
        if evL is gpReg
            // if left one is there - we use that as result
            evOP3 = evL
            evRelease(evR,expr.right.at)
        elif evR is gpReg
            // if right one is there - we use that as result
            evOP3 = evR
            evRelease(evL,expr.left.at)
        else
            /// we allocate new register for the result
            let reg = allocateGP(expr.at)
            evOP3 = [[EvResult gpReg=reg]]
            evRelease(evL,expr.left.at)
            evRelease(evR,expr.right.at)
        log("op3 {evS} ? {evL} : {evR} result in {evS}\n")
        evRelease(evS,expr.subexpr.at)
        return expr
// copy
    def override visitExprCopy(expr:smart_ptr<ExprCopy>) : ExpressionPtr
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        // after copy we are done with both sides
        evRelease(evL,expr.at)
        evRelease(evR,expr.at)
        return expr
// return
    def override visitExprReturn(expr:smart_ptr<ExprReturn>) : ExpressionPtr
        if expr.subexpr!=null
            // if there is return (subexpr), we are done with it
            var evR & = context.expr_res[intptr(expr.subexpr)]
            evRelease(evR,expr.at)
        return expr
// for
    def override preVisitExprFor(expr:smart_ptr<ExprFor>) : void
        if put_loop_variables_in_registers
            for v in expr.iteratorVariables
                let reg = allocateGP(expr.at)
                context.temp_var[intptr(v)] = reg
            if put_loop_sources_in_registers
                if is_for_range1(expr)
                    if !is_for_range1_with_unused_var(expr)
                        // if the loop variable is unused, we don't need extra one for the source
                        let reg = allocateGP(expr.at)
                        context.temp_extra[intptr(expr)] = reg
                    else
                        log("range1 for with unused variable {expr.iteratorVariables[0].name}\n")
        else
            for v in expr.iteratorVariables
                log("loop variable {v.name} [rsp+{uint(v.stackTop)}]\n")
    def override visitExprFor(expr:smart_ptr<ExprFor>) : ExpressionPtr
        if put_loop_variables_in_registers
            for v in expr.iteratorVariables
                if context.temp_var |> key_exists(intptr(v))
                    let reg = context.temp_var[intptr(v)]
                    releaseGP(reg,expr.at)
            if put_loop_sources_in_registers
                if is_for_range1(expr)
                    if !is_for_range1_with_unused_var(expr)
                        let reg = context.temp_extra[intptr(expr)]
                        releaseGP(reg,expr.at)
        // we are done with all sources by the time we are done with loop
        // body would be too early, cause sources used at the loop end to check
        for src in expr.sources
            var evS & = context.expr_res[intptr(src)]
            evRelease(evS,expr.body.at)
        return expr
// call
    def override visitExprCall(var expr:smart_ptr<ExprCall>) : ExpressionPtr
        if !expr.func.flags.builtIn
            // if not recursive, context is used
            if expr.func != this_function
                context.use_context = true
            // allocate temp frame for arguments, 16 bytes ech, aligned
            let bytes = uint(length(expr.arguments) * 16)
            let offset = allocateTempFrame(bytes)
            context.tf_offset[intptr(expr)] = offset
            if expr.func.flags.copyOnReturn || expr.func.flags.moveOnReturn
                failed("visitExprCall expr.func.flags.copyOnReturn || expr.func.flags.moveOnReturn", expr.at)
            if expr.stackTop != 0u
                failed("visitExprCall stackTop={expr.stackTop}", expr.at)
            for argi in range(length(expr.arguments))
                evExpectStack(expr.arguments[argi],offset+uint(argi)*16u,expr.at)
            for arg in expr.arguments
                var eaV & = context.expr_res[intptr(arg)]
                evRelease(eaV,expr.at)
            setTransients(expr)
            if expr.func.result != null
                if expr.func.result.isRef
                    failed("visitExprCall expr.func.result!=null expr.func.result.isRef", expr.at)
                else
                    var fnR & = context.expr_res[intptr(expr)]
                    if expr.func.result.isVectorType
                        let reg = allocateXMM(expr.at)
                        fnR = [[EvResult xmmReg=reg]]
                    else
                        let reg = allocateGP(expr.at)
                        fnR = [[EvResult gpReg=reg]]
                    log("call {expr.func._module.name}::{expr.func.name} returns {fnR}\n")
            log("call {expr.func._module.name}::{expr.func.name} temp frame {offset}\n")
            return expr
        ////////////////////
        // TODO: calls table
        let call_name = "{expr.func._module.name}::{expr.func.name}"
        if call_name=="$::range"
            JIT`range(expr)
        else
            failed("visitExprCall {call_name}", expr.at)
        return expr
    /////////////////////
    // function templates
    def JIT`range(var expr:smart_ptr<ExprCall>)
        // release arugments
        for ai in range(length(expr.arguments))
            var evA & = context.expr_res[intptr(expr.arguments[ai])]
            evRelease(evA,expr.at)
        // range retursn result in an xmm register
        let xreg = allocateXMM(expr.at)
        context.expr_res[intptr(expr)] = [[EvResult xmmReg=xreg]]
