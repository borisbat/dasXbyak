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
    put_loop_variables_in_registers = true      // for i in range(blah);    i goes to GpReg
    put_loop_sources_in_registers = true        // for i in range(blah);    range(blah).y goes to GpReg (but only of loop variables are in regs too)
    put_local_variables_in_registers = true     // var i = 5; i ++          i goes to GpReg
    [[do_not_delete]] local_stack : array<Variable?>
    local_stack_depth : array<int>
    [[do_not_delete]] this_function : Function?
    def AllocateRegistersCodeVisitor ( var ctx:EvContext )
        JitVisitor`JitVisitor(self, ctx)
    def evExpectStack ( expr:ExpressionPtr; stack:uint )
        self->log("expect stack {stack} {expr.__rtti}.{intptr(expr)}\n")
        var eV & = context.expr_res[intptr(expr)]
        if eV is nothing
            eV = [[EvResult stack=stack]]
    def evExpectCmp ( expr:ExpressionPtr )
        self->log("expect results in flags {expr.__rtti}.{intptr(expr)}\n")
        var eV & = context.expr_res[intptr(expr)]
        if eV is nothing
            eV = [[EvResult cmp=CompareType always]]
    def evRelease ( var res:EvResult )
        if res is gpReg
            self->log("release GP reg {res as gpReg}\n")
            context.gpa |> free(int(res as gpReg))
        elif res is xmmReg
            self->log("release XMM reg {res as xmmReg}\n")
            context.xmma |> free(int(res as xmmReg))
    def releaseGP ( reg:GpTempReg )
        context.gpa |> free(int(reg))
    def allocateGP
        let idx = context.gpa |> allocate()
        unsafe
            let reg = reinterpret<GpTempReg> idx
            self->log("allocate GP reg {reg}\n")
            return reg
    def allocateXMM
        let idx = context.xmma |> allocate()
        unsafe
            let reg = reinterpret<XmmTempReg> idx
            self->log("allocate XMM reg {reg}\n")
            return reg
    def allocateTempFrame(bytes:uint)       // TODO: allow 'free' of temp frame?
        let res = context.temp_frame
        context.temp_frame += bytes
        self->log("allocated temp_frame {bytes} at {res} offset\n")
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
        self->evRelease(topE)
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
                self->releaseGP(reg)
                self->log("{local_stack[t].name} out of scope, {reg}\n")
        local_stack |> resize(lsd)
        return blk
// const int
    def override visitExprConstInt(expr:smart_ptr<ExprConstInt>) : ExpressionPtr
        self->acceptConstR64(expr,uint64(expr.value))
        return expr
// const bool
    def override visitExprConstBool(expr:smart_ptr<ExprConstBool>) : ExpressionPtr
        self->acceptConstR64(expr,expr.value ? 1ul : 0ul)
        return expr
// let
    def override preVisitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : void
        local_stack |> push(get_ptr(arg))
        if !arg._type.isRef
            if arg._type |> is_gpreg_type
                // if its a local variable of the right type, promote to gpReg and done
                let reg = self->allocateGP()
                context.temp_var[intptr(arg)] = reg
                self->log("promote {arg.name} to {reg}\n")
                return
            else
                self->failed("ExprLetVariable !arg._type.isRef, {describe(arg._type)}", expr.at)
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
                    self->failed("ExprLetVariable expr.varFlags.local expr.varFlags.r2v, {expr.variable.name} : {describe(expr.variable._type)}", expr.at)
            else
                // if we are asking for reference, return stack
                ev = [[EvResult stack=expr.variable.stackTop]]
        elif expr.varFlags.argument // arguments
            context.use_args = true
            if expr.varFlags.r2v
                if expr.variable._type |> is_gpreg_type
                    // return local variable as GP register
                    let reg = self->allocateGP()
                    ev = [[EvResult gpReg=reg]]
                else
                    self->failed("ExprLetVariable expr.varFlags.argument expr.varFlags.r2v, {expr.variable.name} : {describe(expr.variable._type)}", expr.at)
            else
                // TODO: do we need 'argument' ref type?
                let reg = self->allocateGP()
                ev = [[EvResult gpReg=reg]]
        else
            self->failed("ExprLetVariable {expr.variable.name} : {describe(expr.variable._type)}", expr.at)
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
                        self->log("{expr.op} prefix result stays in {ev}\n")
                        evOP1 = ev
                    elif ev is gpReg
                        // if subexpr is register, we reuse it as a result
                        evOP1 = ev
                    else
                        // we allocate new register for result
                        self->evRelease(ev)
                        let reg = self->allocateGP()
                        evOP1 = [[EvResult gpReg=reg]]
            else
                self->failed("ExprOp1 {expr.op} expr.subexpr._type.isWorkhorseType {describe(expr.subexpr._type)}", expr.at)
        else
            self->failed("ExprOp1 {expr.op} {describe(expr.subexpr._type)}", expr.at)
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
                    self->evRelease(evL)
                    self->evRelease(evR)
                else
                    if evOP2 is cmp
                        if expr.op=="<"
                            evOP2 = [[EvResult cmp=CompareType less]]
                        elif expr.op=="=="
                            evOP2 = [[EvResult cmp=CompareType equals]]
                        else
                            self->failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType  expr.left._type.isRef (evOP2 is cmp)", expr.at)
                        self->evRelease(evL)
                        self->evRelease(evR)
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
                                    self->evRelease(evR)
                                else
                                    self->failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType evL is gpReg right={evR}", expr.at)
                            elif evL is gpRegT
                                // we allocate new temp register
                                let nreg = self->allocateGP()
                                evOP2 = [[EvResult gpReg=nreg]]
                                // we release both left and right
                                self->evRelease(evL)
                                self->evRelease(evR)
                                self->log("reg {nreg} for {describe(expr)}\n")
                            else
                                self->failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType left={evL} right={evR}", expr.at)
                        else
                            self->failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType", expr.at)
            else
                self->failed("ExprOp2 {expr.op} expr.left._type.isWorkhorseType {describe(expr.left._type)}", expr.at)
        else
            self->failed("ExprOp2 {expr.op} {describe(expr.left._type)}", expr.at)
        return expr
// if-then-else
    def override preVisitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>) : void
        self->evExpectCmp(expr.cond)
    def override visitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>) : ExpressionPtr
        var evCond & = context.expr_res[intptr(expr.cond)]
        self->evRelease(evCond)
        return expr
// op3
    def override preVisitExprOp3(expr:smart_ptr<ExprOp3>): void
        self->evExpectCmp(expr.subexpr)
    def override visitExprOp3(expr:smart_ptr<ExprOp3>) : ExpressionPtr
        // TODO: support result type
        var evS & = context.expr_res[intptr(expr.subexpr)]
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        var evOP3 & = context.expr_res[intptr(expr)]
        if evL is gpReg
            // if left one is there - we use that as result
            evOP3 = evL
            self->evRelease(evR)
        elif evR is gpReg
            // if right one is there - we use that as result
            evOP3 = evR
            self->evRelease(evL)
        else
            /// we allocate new register for the result
            let reg = self->allocateGP()
            evOP3 = [[EvResult gpReg=reg]]
            self->evRelease(evL)
            self->evRelease(evR)
        self->log("op3 {evS} ? {evL} : {evR} result in {evS}\n")
        self->evRelease(evS)
        return expr
// copy
    def override visitExprCopy(expr:smart_ptr<ExprCopy>) : ExpressionPtr
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        // after copy we are done with both sides
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
                    else
                        self->log("range1 for with unused variable {expr.iteratorVariables[0].name}\n")
    def override preVisitExprForBody(expr:smart_ptr<ExprFor>) : void
        // we are done with all sources by the time we reach the loop body
        for src in expr.sources
            var evS & = context.expr_res[intptr(src)]
            self->evRelease(evS)
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
        return expr
// call
    def override visitExprCall(var expr:smart_ptr<ExprCall>) : ExpressionPtr
        if !expr.func.flags.builtIn
            // if not recursive, context is used
            if expr.func != this_function
                context.use_context = true
            // allocate temp frame for arguments, 16 bytes ech, aligned
            let bytes = uint(length(expr.arguments) * 16)
            let offset = self->allocateTempFrame(bytes)
            context.tf_offset[intptr(expr)] = offset
            if expr.func.flags.copyOnReturn || expr.func.flags.moveOnReturn
                self->failed("visitExprCall expr.func.flags.copyOnReturn || expr.func.flags.moveOnReturn", expr.at)
            if expr.stackTop != 0u
                self->failed("visitExprCall stackTop={expr.stackTop}", expr.at)
            for argi in range(length(expr.arguments))
                self->evExpectStack(expr.arguments[argi],offset+uint(argi)*16u)
            for arg in expr.arguments
                var eaV & = context.expr_res[intptr(arg)]
                self->evRelease(eaV)
            self->setTransients(expr)
            if expr.func.result != null
                if expr.func.result.isRef
                    self->failed("visitExprCall expr.func.result!=null expr.func.result.isRef", expr.at)
                else
                    var fnR & = context.expr_res[intptr(expr)]
                    if expr.func.result.isVectorType
                        let reg = self->allocateXMM()
                        fnR = [[EvResult xmmReg=reg]]
                    else
                        let reg = self->allocateGP()
                        fnR = [[EvResult gpReg=reg]]
                    self->log("call {expr.func._module.name}::{expr.func.name} returns {fnR}\n")
            self->log("call {expr.func._module.name}::{expr.func.name} temp frame {offset}\n")
            return expr
        ////////////////////
        // TODO: calls table
        let call_name = "{expr.func._module.name}::{expr.func.name}"
        if call_name=="$::range"
            self->JIT`range(expr)
        else
            self->failed("visitExprCall {call_name}", expr.at)
        return expr
    /////////////////////
    // function templates
    def JIT`range(var expr:smart_ptr<ExprCall>)
        // release arugments
        for ai in range(length(expr.arguments))
            var evA & = context.expr_res[intptr(expr.arguments[ai])]
            self->evRelease(evA)
        // range retursn result in an xmm register
        let xreg = self->allocateXMM()
        context.expr_res[intptr(expr)] = [[EvResult xmmReg=xreg]]
