options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64_alloc_regs public

require jit_x86_64_regs
require jit_x86_64_common

require daslib/ast_boost
require daslib/strings_boost
require daslib/templates_boost
require math

require dasxbyak/xbyak_boost
require xbyak public

require ast public

class AllocateRegistersCodeVisitor : AstVisitor
    verbose = true
    put_loop_variables_in_registers = true      // for i in range(blah);    i goes to GpReg
    put_loop_sources_in_registers = true        // for i in range(blah);    range(blah).y goes to GpReg (but only of loop variables are in regs too)
    put_local_variables_in_registers = true     // var i = 5; i ++          i goes to GpReg
    context : EvContext
    [[do_not_delete]] local_stack : array<Variable?>
    local_stack_depth : array<int>
    [[do_not_delete]] this_function : Function?
    failed_to_allocate : bool
    def AllocateRegistersCodeVisitor
        pass
    def error ( txt:string; at:LineInfo; atX:LineInfo )
        failed_to_allocate = true
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("ERROR jit_x86_64(allocate_registers): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
        stackwalk(false,false)
    def failed ( txt:string; at:LineInfo )
        failed_to_allocate = true
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("TODO jit_x86_64(allocate_registers): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
        stackwalk(false,false)
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
        this_function = get_ptr(fun)
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
            context.use_args = true
            if expr.varFlags.r2v
                if expr.variable._type |> is_gpreg_type
                    // return local variable as GP register
                    let reg = self->allocateGP()
                    ev = [[EvResult gpReg=reg]]
                else
                    self->failed("{expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
            else
                // TODO: do we need 'argument' ref type?
                let reg = self->allocateGP()
                ev = [[EvResult gpReg=reg]]
        else
            self->failed("{expr.variable.name} support that other variable type", expr.at)
        return expr
// op1
    def override visitExprOp1(expr:smart_ptr<ExprOp1>) : ExpressionPtr
        var ev & = context.expr_res[intptr(expr.subexpr)]
        var evOP1 & = context.expr_res[intptr(expr)]
        if expr.subexpr._type.isInteger
            if expr.subexpr._type.baseType==Type tInt
                if expr.op=="++" || expr.op=="+++" || expr.op=="--" || expr.op=="---"
                    if (ev is gpRegT) && (expr.op=="++" || expr.op=="--")
                        // if its temp variable, and its pre-inc and pre-dec - result is that variable
                        if verbose
                            print("{expr.op} prefix result stays in {ev}\n")
                        evOP1 = ev
                    elif ev is gpReg
                        // if subexpr is register, we reuse it as a result
                        evOP1 = ev
                    else
                        // we allocate new register for result
                        self->evRelease(ev)
                        let reg = self->allocateGP()
                        evOP1 = [[EvResult gpReg=reg]]
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
                        elif expr.op=="=="
                            evOP2 = [[EvResult cmp=CompareType equals]]
                        else
                            self->failed("OP2 {expr.op} support cmp result for more operators", expr.at)
                        self->evRelease(evL)
                        self->evRelease(evR)
                    else
                        // imm operators
                        if expr.op=="-" || expr.op=="+" || expr.op=="*" || expr.op=="/" || expr.op=="%" || expr.op=="<" || expr.op=="=="
                            if expr.op=="%" || expr.op=="/"                 // this operators require context for the exceptions
                                context.use_context = true
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
        // todo: support result type
        var evS & = context.expr_res[intptr(expr.subexpr)]
        var evL & = context.expr_res[intptr(expr.left)]
        var evR & = context.expr_res[intptr(expr.right)]
        var evOP3 & = context.expr_res[intptr(expr)]
        if evL is gpReg
            evOP3 = evL
            self->evRelease(evR)
        elif evR is gpReg
            evOP3 = evR
            self->evRelease(evL)
        else
            let reg = self->allocateGP()
            evOP3 = [[EvResult gpReg=reg]]
            self->evRelease(evL)
            self->evRelease(evR)
        if verbose
            print("op3 {evS} ? {evL} : {evR} result in {evS}\n")
        self->evRelease(evS)
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
                    else
                        if verbose
                            print("range1 for with unused variable {expr.iteratorVariables[0].name}\n")
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
            // if not recursive, context is used
            if expr.func != this_function
                context.use_context = true
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
            for arg in expr.arguments
                var eaV & = context.expr_res[intptr(arg)]
                self->evRelease(eaV)
            self->setTransients(expr)
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
            if verbose
                print("call {expr.func._module.name}::{expr.func.name} temp frame {offset}\n")
            return expr
        ////////////////////
        // TODO: calls table
        let call_name = "{expr.func._module.name}::{expr.func.name}"
        if call_name=="$::range"
            self->JIT`range(expr)
        else
            self->failed("support all other functions", expr.at)
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
