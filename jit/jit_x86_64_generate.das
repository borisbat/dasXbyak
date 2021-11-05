options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64_generate shared public

require jit_x86_64_regs
require jit_x86_64_common

require daslib/ast_boost
require daslib/strings_boost
require daslib/templates_boost
require math

require dasxbyak/xbyak_boost
require xbyak public
require zydis

require ast public

class GenerateCodeVisitor : JitVisitor
    assume_no_exceptions : bool = false
    tab : int
    [[do_not_delete]] gen : CodeGenerator?
    [[do_not_delete]] this_function : Function?
    func_begin : void?
    rdx_has_args : bool                             // rdx contains arg *, as part of the parameters passed
    loop_stack : array<uint64>
    def GenerateCodeVisitor(var g:CodeGenerator?; var ctx:EvContext )
        JitVisitor`JitVisitor(self, ctx)
        gen = g
// ABI
    def getContextOffset
        return context.stack_frame+context.temp_frame+context.save_frame+8u+ARG_CONTEXT
    def getArgOffset
        return context.stack_frame+context.temp_frame+context.save_frame+8u+ARG_ARGUMENTS
    def getCmresOffset
        return context.stack_frame+context.temp_frame+context.save_frame+8u+ARG_CMRES
// exception
    def JIT`exception(text:string):void
        with_xbyak(gen) <| $ ( GEN )
            let ctx_offset = getContextOffset()
            mov(rcx,jit_generate_const_string(text))    // rcx is exception text
            mov(rdx,ptr[rsp+ctx_offset])                // rdx is Context *
            sub(rsp,32u)
            mov(rax,JIT_exception())
            call(rax)
            add(rsp,32u)
// helpers
    def copyReg32 ( dest:GpTempReg; srcV:EvResult; at:LineInfo ) : void     //  mov reg, data
        with_xbyak(gen) <| $ ( GEN )
            if srcV is gpReg
                if dest != (srcV as gpReg)
                    mov(REG32(GEN,dest),REG32(GEN,srcV as gpReg))
            elif srcV is gpRegT
                if dest != (srcV as gpRegT)
                    mov(REG32(GEN,dest),REG32(GEN,srcV as gpRegT))
            elif srcV is iconst
                mov(REG32(GEN,dest),srcV as iconst)
            elif srcV is stack
                mov(REG32(GEN,dest),ptr[rsp+(srcV as stack)])
            else
                failed("copyReg32 {dest} <- {srcV}", at)
    def setRdxToArgs()
        if !rdx_has_args
            with_xbyak(gen) <| $ ( GEN )
                mov(rdx,ptr[rsp+getArgOffset()])
                rdx_has_args
// function
    def override preVisitFunction(fun:FunctionPtr) : void
        log("(DEF {fun.name} [STACK={context.stack_frame}, TEMP={context.temp_frame}]\n")
        rdx_has_args = true
        this_function = get_ptr(fun)
        unsafe
            func_begin = *gen |> get_code()
        with_xbyak(gen) <| $ ( GEN )
            // passing (context(rcx) *, arguments(rdx) *, cmres(r8) *)
            if context.use_cmres
                mov(qword[rsp+ARG_CMRES],r8)
            if context.use_args
                mov(qword[rsp+ARG_ARGUMENTS],rdx)
            if context.use_context
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
    def override visitFunction(fun:FunctionPtr) : FunctionPtr
        if fun.result==null || fun.result.isVoid
            gen_epilogue()
        log(")\n")
        return fun
// const int
    def override preVisitExprConstInt(expr:smart_ptr<ExprConstInt>) : void
        log("(INT32 {expr.value})")
    def override visitExprConstInt(expr:smart_ptr<ExprConstInt>) : ExpressionPtr
        with_xbyak(gen) <| $ ( GEN )
            let ev & = evResGet(expr)
            if ev is stack
                mov(dword[rsp+(ev as stack)],uint64(expr.value))
        log(")")
        return expr
// let
    def override preVisitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : void
        log("(LET {arg.name} #{arg.stackTop} ")
    def override visitExprLetVariable(expr:smart_ptr<ExprLet>;arg:VariablePtr;lastArg:bool) : VariablePtr
        if arg.init==null
            with_xbyak(gen) <| $ ( GEN )
                let initSize = arg._type.isRef ? 8 : arg._type.sizeOf
                if initSize==4 || initSize==2 || initSize==1
                    mov(dword[rsp+arg.stackTop],0ul)
                elif initSize==8
                    mov(qword[rsp+arg.stackTop],0ul)
                else
                    failed("visitExprLetVariable arg.init==null initSize={initSize}",expr.at)
        log(")")
        return arg
    def override visitExprLetVariableInit(blk:smart_ptr<ExprLet>;arg:VariablePtr;expr:ExpressionPtr) : ExpressionPtr
        let evI & = evResGet(arg.init)
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
                            mov(REG32(GEN,reg),dword[REG64(GEN,evI as gpReg)])
                        elif evI is gpRegT
                            mov(REG32(GEN,reg),REG32(GEN,evI as gpRegT))
                        else
                            failed("ExprLetVariableInit arg.init._type.ref temp_var {arg.name}:{arg._type} evI={evI}",arg.init.at)
                    else
                        failed("ExprLetVariableInit arg.init._type.ref temp_var {arg.name}:{arg._type} initSize={initSize}",arg.init.at)
                else
                    if initSize==4 || initSize==2 || initSize==1
                        copyReg32(GpTempReg RAX, evI, expr.at)
                        mov(ptr[rsp+arg.stackTop],eax)
                    else
                        failed("ExprLetVariableInit arg.init._type.ref {arg.name}:{arg._type} initSize={initSize}",arg.init.at)
            else
                if context.temp_var |> key_exists(intptr(arg))
                    let reg = context.temp_var[intptr(arg)]
                    if initSize==4 || initSize==2 || initSize==1
                        copyReg32(reg,evI,expr.at)
                    else
                        failed("ExprLetVariableInit temp_var {arg.name}:{arg._type} initSize={initSize}",arg.init.at)
                else
                    failed("ExprLetVariableInit {arg.name}:{arg._type} initSize={initSize}",arg.init.at)
        return  expr
// variable
    def override preVisitExprVar(expr:smart_ptr<ExprVar>) : void
        log("(VAR {expr.name} ")
        if expr.varFlags.r2v
            log("R2V ")
    def override visitExprVar(expr:smart_ptr<ExprVar>) : ExpressionPtr
        let ev & = evResGet(expr)
        with_xbyak(gen) <| $ ( GEN )
            if expr.varFlags._block
                failed("ExprVar expr.varFlags._block {expr.variable.name}:{describe(expr.variable._type)}", expr.at)
            elif expr.varFlags.local
                if context.temp_var |> key_exists(intptr(expr.variable))
                    // this variable is in the register
                    pass
                elif expr.varFlags.r2v
                    let varSize = expr._type.sizeOf
                    if expr.variable._type |> is_gpreg_type
                        let reg = ev as gpReg
                        log("[{reg}]")
                        if varSize==8
                            mov(REG64(GEN,reg),qword[rsp+expr.variable.stackTop])
                        elif varSize==4
                            mov(REG32(GEN,reg),dword[rsp+expr.variable.stackTop])
                        else
                            failed("ExprVar expr.varFlags.local expr.varFlags.r2v {expr.variable.name}:{describe(expr.variable._type)} varSize={varSize}", expr.at)
                    else
                        failed("ExprVar expr.varFlags.local {expr.variable.name}:{describe(expr.variable._type)}", expr.at)
            elif expr.varFlags.argument
                if expr.varFlags.r2v
                    let varSize = expr._type.sizeOf
                    if expr.variable._type |> is_gpreg_type
                        if ev is gpReg
                            let reg = ev as gpReg
                            log("[{reg}]")
                            setRdxToArgs()
                            if varSize==8
                                mov(REG64(GEN,reg),qword[rdx+(expr.argumentIndex*16)])
                            elif varSize==4 || varSize==2 || varSize==1
                                mov(REG32(GEN,reg),dword[rdx+(expr.argumentIndex*16)])
                            else
                                failed("ExprVar expr.varFlags.argument expr.varFlags.r2v {expr.variable.name}:{describe(expr.variable._type)} varSize={varSize}", expr.at)
                        else
                            failed("ExprVar expr.varFlags.argument expr.varFlags.r2v {expr.variable.name}:{describe(expr.variable._type)} (register should be allocated?)", expr.at)
                    else
                        failed("ExprVar expr.varFlags.argument expr.varFlags.r2v {expr.variable.name}:{describe(expr.variable._type)}", expr.at)
                else
                    if ev is gpReg
                        setRdxToArgs()
                        lea(REG64(GEN,ev as gpReg),qword[rdx+(expr.argumentIndex*16)])
                    else
                        failed("ExprVar expr.varFlags.argument {expr.variable.name}:{describe(expr.variable._type)}", expr.at)
            else
                failed("ExprVar {expr.variable.name}:{describe(expr.variable._type)}", expr.at)
        log(")")
        return expr
// op1
    def override preVisitExprOp1(expr:smart_ptr<ExprOp1>) : void
        log("(OP1 {expr.op} ")
    def override visitExprOp1(expr:smart_ptr<ExprOp1>) : ExpressionPtr
        let ev & = evResGet(expr.subexpr)
        let evOP1 & = evResGet(expr)
        with_xbyak(gen) <| $ ( GEN )
            if expr.subexpr._type.isInteger
                if expr.subexpr._type.baseType==Type tInt || expr.subexpr._type.baseType==Type tUInt
                    if expr.subexpr._type.isRef    // ++, --
                        if ev is gpReg
                            if expr.op=="+++" || expr.op=="---"
                                mov(eax,dword[REG64(GEN,ev as gpReg)])
                                if expr.op=="+++"
                                    inc(dword[REG64(GEN,ev as gpReg)])
                                else
                                    dec(dword[REG64(GEN,ev as gpReg)])
                                mov(REG32(GEN,ev as gpReg),eax)
                            else
                                failed("ExprOp1 {expr.op} expr.subexpr._type.isRef ev is gpReg", expr.at)
                        elif ev is gpRegT
                            if expr.op=="+++" || expr.op=="---"
                                assert(evOP1 is gpReg)
                                mov(REG32(GEN,evOP1 as gpReg),REG32(GEN,ev as gpRegT))
                                if expr.op=="+++"
                                    inc(REG32(GEN,ev as gpRegT))
                                else
                                    dec(REG32(GEN,ev as gpRegT))
                            elif expr.op=="++" || expr.op=="--"
                                assert(evOP1 is gpRegT)
                                if expr.op=="++"
                                    inc(REG32(GEN,ev as gpRegT))
                                else
                                    dec(REG32(GEN,ev as gpRegT))
                            else
                                failed("ExprOp1 {expr.op} integer expr.subexpr._type.isRef ev is gpRegT", expr.at)
                        else
                            failed("ExprOp1 {expr.op} integer expr.subexpr._type.isRef ev={ev}", expr.at)
                    else
                        failed("ExprOp1 {expr.op} integer !expr.subexpr._type.isRef", expr.at)
                else
                    failed("ExprOp1 {expr.op} integer {describe(expr.subexpr._type)}", expr.at)
            else
                failed("ExprOp1 {expr.op} {describe(expr.subexpr._type)}", expr.at)
        log(")")
        return expr
// op2
    def override preVisitExprOp2(expr:smart_ptr<ExprOp2>): void
        log("(OP2 {expr.op} ")
    def override visitExprOp2(expr:smart_ptr<ExprOp2>) : ExpressionPtr
        let evOP2 &  = evResGet(expr)
        let evL & = evResGet(expr.left)
        let evR & = evResGet(expr.right)
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
                                    failed("ExprOp2 {expr.op} expr.left._type.isInteger integer expr.left._type.isRef temp evR={evR}", expr.at)
                            else
                                failed("ExprOp2 {expr.op} expr.left._type.isInteger integer expr.left._type.isRef", expr.at)
                        else
                            if expr.op=="+="
                                if evL is stack
                                    if evR is gpReg
                                        add(dword[rsp+(evL as stack)],REG32(GEN,evR as gpReg))
                                    elif evR is gpRegT
                                        add(dword[rsp+(evL as stack)],REG32(GEN,evR as gpRegT))
                                    else
                                        failed("ExprOp2 {expr.op} expr.left._type.isInteger integer expr.left._type.isRef evR={evR}", expr.at)
                                else
                                    failed("ExprOp2 {expr.op} expr.left._type.isInteger integer expr.left._type.isRef evL={evL}", expr.at)
                            else
                                failed("ExprOp2 {expr.op} expr.left._type.isInteger integer expr.left._type.isRef", expr.at)
                    else
                        if evOP2 is cmp
                            if expr.op=="<" || expr.op=="=="
                                if evL is gpReg
                                    // result is in the left register, which we reused during allocation
                                    if evR is iconst
                                        let ic = uint(evR as iconst)
                                        if expr.op=="<" || expr.op=="=="
                                            cmp(REG32(GEN,evL as gpReg),ic)
                                        else
                                            failed("ExprOp2 {expr.op} expr.left._type.isInteger integer cmp evL is gpReg, evR is const", expr.at)
                                    elif evR is gpReg
                                        if expr.op=="<" || expr.op=="=="
                                            cmp(REG32(GEN,evL as gpReg),REG32(GEN,evR as gpReg))
                                        else
                                            failed("ExprOp2 {expr.op} expr.left._type.isInteger integer cmp evL is gpReg, evR is gpReg", expr.at)
                                    else
                                        failed("ExprOp2 {expr.op} expr.left._type.isInteger integer cmp evL is gpReg, evR={evR}", expr.at)
                                elif evL is gpRegT
                                    // result is in the left register, which we reused during allocation
                                    if evR is iconst
                                        let ic = uint(evR as iconst)
                                        if expr.op=="<" || expr.op=="=="
                                            cmp(REG32(GEN,evL as gpRegT),ic)
                                        else
                                            failed("ExprOp2 {expr.op} expr.left._type.isInteger integer cmp evL is gpRegT, evR is const", expr.at)
                                    elif evR is gpReg
                                        if expr.op=="<" || expr.op=="=="
                                            cmp(REG32(GEN,evL as gpRegT),REG32(GEN,evR as gpReg))
                                        else
                                            failed("ExprOp2 {expr.op} expr.left._type.isInteger integer cmp evL is gpRegT, evR is gpReg", expr.at)
                                    else
                                        failed("ExprOp2 {expr.op} expr.left._type.isInteger integer cmp evL is gpRegT, evR={evR}", expr.at)
                                else
                                    failed("ExprOp2 {expr.op} expr.left._type.isInteger integer cmp evL is gpRegT, evL={evL} evR={evR}", expr.at)
                                log(" [{evL}]")
                            else
                                failed("ExprOp2 {expr.op} expr.left._type.isInteger integer cmp}", expr.at)
                        else
                            if expr.op=="+" || expr.op=="-" || expr.op=="%" || expr.op=="/" || expr.op=="<" || expr.op=="=="
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
                                            elif expr.op=="<" || expr.op=="=="
                                                cmp(REG32(GEN,evL as gpReg),ic)
                                                mov(REG32(GEN,evL as gpReg),0ul)
                                                mov(eax,1ul)
                                                if expr.op=="<"
                                                    cmovl(REG32(GEN,evL as gpReg),eax)
                                                elif expr.op=="=="
                                                    cmove(REG32(GEN,evL as gpReg),eax)
                                                else
                                                    failed("ExprOp2 {expr.op} expr.left._type.isInteger integer evL is gpReg, evR is iconst bool", expr.at)
                                            elif expr.op=="%" || expr.op=="/"
                                                if (evR as iconst)==0ul
                                                    failed("DIVISION BY ZERO", expr.at)
                                                mov(eax,REG32(GEN,evL as gpReg))
                                                mov(REG32(GEN,evL as gpReg),evR as iconst)
                                                cdq()
                                                idiv(REG32(GEN,evL as gpReg));  rdx_has_args = false
                                                mov(REG32(GEN,evL as gpReg),expr.op=="%" ? edx : eax)
                                            else
                                                failed("ExprOp2 {expr.op} expr.left._type.isInteger integer evL is gpReg, evR is iconst", expr.at)
                                    elif (evR is gpReg) || (evR is gpRegT)
                                        let regR = (evR is gpReg) ? (evR as gpReg) : (evR as gpRegT)
                                        if expr.op=="+"
                                            add(REG32(GEN,evL as gpReg),REG32(GEN,regR))
                                        elif expr.op=="-"
                                            sub(REG32(GEN,evL as gpReg),REG32(GEN,regR))
                                        elif expr.op=="%" || expr.op=="/"
                                            if !assume_no_exceptions
                                                test(REG32(GEN,regR),REG32(GEN,regR))
                                                jne(".div_{intptr(expr)}",LabelType T_AUTO)
                                                JIT`exception("division by zero")
                                                L(".div_{intptr(expr)}")
                                            mov(eax,REG32(GEN,evL as gpReg))
                                            cdq()
                                            idiv(REG32(GEN,regR));  rdx_has_args = false
                                            mov(REG32(GEN,evL as gpReg),expr.op=="%" ? edx : eax)
                                        else
                                            failed("ExprOp2 {expr.op} expr.left._type.isInteger integer evL is gpReg, (evR is gpReg || evR is gpRegT)", expr.at)
                                    else
                                        failed("ExprOp2 {expr.op} expr.left._type.isInteger integer evL is gpReg, evR={evR}", expr.at)
                                    log(" [{evL}]")
                                else
                                    // result is in the result register, which we allocated separately
                                    assert(evOP2 is gpReg)
                                    if (evL is gpReg) && (evR is iconst)
                                        if expr.op=="+"
                                            lea(REG32(GEN,evOP2 as gpReg),ptr[REG32(GEN,(evL as gpReg))+uint(evR as iconst)])
                                        elif expr.op=="-"
                                            lea(REG32(GEN,evOP2 as gpReg),ptr[REG32(GEN,(evL as gpReg))-uint(evR as iconst)])
                                        else
                                            failed("ExprOp2 {expr.op} expr.left._type.isInteger integer evOP2 is gpReg, evL is gpReg && evR is iconst", expr.at)
                                    if (evL is gpRegT) && (evR is iconst)
                                        if expr.op=="+"
                                            lea(REG32(GEN,evOP2 as gpReg),ptr[REG32(GEN,(evL as gpRegT))+uint(evR as iconst)])
                                        elif expr.op=="-"
                                            lea(REG32(GEN,evOP2 as gpReg),ptr[REG32(GEN,(evL as gpRegT))-uint(evR as iconst)])
                                        elif expr.op=="%" || expr.op=="/"
                                            if (evR as iconst)==0ul
                                                failed("DIVISION BY ZERO", expr.at)
                                            mov(REG32(GEN,evOP2 as gpReg),evR as iconst)
                                            mov(eax,REG32(GEN,evL as gpRegT))
                                            cdq()
                                            idiv(REG32(GEN,evOP2 as gpReg));  rdx_has_args = false
                                            mov(REG32(GEN,evOP2 as gpReg),expr.op=="%" ? edx : eax)
                                        else
                                            failed("ExprOp2 {expr.op} expr.left._type.isInteger integer evOP2 is gpReg, evL s gpRegT && evR is iconst", expr.at)
                                    else
                                        if expr.op=="%" || expr.op=="/"
                                            copyReg32(GpTempReg RAX, evL, expr.at)
                                            var div_reg = GpTempReg RCX
                                            if evR is gpReg
                                                div_reg = evR as gpReg
                                            elif evR is gpRegT
                                                div_reg = evR as gpRegT
                                            copyReg32(div_reg, evR, expr.at)
                                            if !assume_no_exceptions
                                                test(REG32(GEN,div_reg),REG32(GEN,div_reg))
                                                jnz(".div_{intptr(expr)}",LabelType T_AUTO)
                                                JIT`exception("division by zero")
                                                L(".div_{intptr(expr)}")
                                            cdq()
                                            idiv(REG32(GEN,div_reg));  rdx_has_args = false
                                            mov(REG32(GEN,evOP2 as gpReg),expr.op=="%" ? edx : eax)
                                        else
                                            copyReg32(evOP2 as gpReg,evL,expr.at)
                                            if evR is iconst
                                                if expr.op=="+"
                                                    add(REG32(GEN,evOP2 as gpReg),uint(evR as iconst))
                                                elif expr.op=="-"
                                                    sub(REG32(GEN,evOP2 as gpReg),uint(evR as iconst))
                                                else
                                                    failed("ExprOp2 {expr.op} expr.left._type.isInteger integer evOP2 is gpReg, evR is iconst", expr.at)
                                            else
                                                failed("ExprOp2 {expr.op} expr.left._type.isInteger integer evOP2 is gpReg, evR={evR}", expr.at)
                            else
                                failed("ExprOp2 {expr.op} expr.left._type.isInteger integer", expr.at)
                else
                    failed("ExprOp2 {expr.op} expr.left._type.isInteger {describe(expr.left._type)}", expr.at)
            else
                failed("ExprOp2 {expr.op} {describe(expr.left._type)}", expr.at)
        log(")")
        return expr
// if-then-else
    /*
    1. if if_false is not null, and there is an 'else' section
        if cond
                cmp ???
                jne if_cond_faild
                if_true
                goto if_end
            .if_consd_failed:
                if_false
            .if_end:
    2. if if_false is null, and there is no 'else' section
        if cond
                cmp ???
                jne if_end
                if_true
            .if_end:
    */
    def override preVisitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>) : void
        if verbose
            tab ++
            print("(IF\n{repeat("\t",tab)}")
    def override preVisitExprIfThenElseIfBlock(expr:smart_ptr<ExprIfThenElse>;ifBlock:ExpressionPtr) : void
        let evS & = evResGet(expr.cond)
        with_xbyak(gen) <| $ ( GEN )
            if evS is gpReg
                test(REG32(GEN,evS as gpReg),REG32(GEN,evS as gpReg))
                if expr.if_false==null
                    jz(".if_end_{intptr(expr)}",LabelType T_AUTO)
                else
                    jz(".if_cond_failed_{intptr(expr)}",LabelType T_AUTO)
            elif evS is cmp
                if expr.if_false==null
                    GEN |> condJumpIfNot(".if_end_{intptr(expr)}",evS as cmp)
                else
                    GEN |> condJumpIfNot(".if_cond_failed_{intptr(expr)}",evS as cmp)
            else
                failed("ExprIfThenElse evS={evS}", expr.at)
        log("\n{repeat("\t",tab)}THEN\n")
    def override preVisitExprIfThenElseElseBlock(expr:smart_ptr<ExprIfThenElse>;elseBlock:ExpressionPtr) : void
        // we are only here, if there is an else block
        with_xbyak(gen) <| $ ( GEN )
            jmp(".if_end_{intptr(expr)}",LabelType T_AUTO)
            L(".if_cond_failed_{intptr(expr)}");  rdx_has_args = false
        log("\n{repeat("\t",tab)}ELSE\n")
    def override visitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>) : ExpressionPtr
        with_xbyak(gen) <| $ ( GEN )
            L(".if_end_{intptr(expr)}");  rdx_has_args = false
        if verbose
            tab --
            print(")\n{repeat("\t",tab)}")
        return expr
// op3
/*
    cmp ???
    jn  .cond_right
    result = cond_left
    jmp .cond_end
.cond_right:
    result = cond_right
.cond_end:
*/
    def override preVisitExprOp3(expr:smart_ptr<ExprOp3>): void
        log("(? ")
    def override preVisitExprOp3Left(expr:smart_ptr<ExprOp3>;left:ExpressionPtr): void
        let evS & = evResGet(expr.subexpr)
        with_xbyak(gen) <| $ ( GEN )
            if evS is gpReg
                test(REG32(GEN,evS as gpReg),REG32(GEN,evS as gpReg))
                jz(".cond_right_{intptr(expr)}",LabelType T_AUTO)
            elif evS is cmp
                GEN |> condJumpIfNot(".cond_right_{intptr(expr)}",evS as cmp)
            else
                failed("supprt cond subexpr in {evS}", expr.at)
        log(" ? ")
    def override preVisitExprOp3Right(expr:smart_ptr<ExprOp3>;right:ExpressionPtr): void
        let eV & = evResGet(expr)
        let evL & = evResGet(expr.left)
        with_xbyak(gen) <| $ ( GEN )
            copyReg32(eV as gpReg,evL,expr.at)
            jmp(".cond_end_{intptr(expr)}",LabelType T_AUTO)
            L(".cond_right_{intptr(expr)}");  rdx_has_args = false
        log(" : ")
    def override visitExprOp3(expr:smart_ptr<ExprOp3>) : ExpressionPtr
        let eV & = evResGet(expr)
        let evR & = evResGet(expr.right)
        with_xbyak(gen) <| $ ( GEN )
            copyReg32(eV as gpReg,evR,expr.at)
            L(".cond_end_{intptr(expr)}");  rdx_has_args = false
        log(")")
        return expr
// copy
    def override preVisitExprCopy(expr:smart_ptr<ExprCopy>): void
        log("(COPY ")
    def override visitExprCopy(expr:smart_ptr<ExprCopy>) : ExpressionPtr
        let evL & = evResGet(expr.left)
        let evR & = evResGet(expr.right)
        log("EVL={evL},EVR={evR} ")
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
                            failed("ExprCopy temp expr.right._type.isRef {reg} evR={evR}", expr.at)
                    else
                        failed("ExprCopy temp expr.right._type.isRef {reg} copySize={copySize}", expr.at)
                    log("(REF COPY {copySize})")
                else
                    failed("ExprCopy temp {reg}", expr.at)
            else
                if expr.right._type.isRef
                    if copySize==4
                        if evR is gpReg
                            print("WARNING: FROM STACK AS GPREG, VERIFY?\n")    // i think its dword[REG64...]
                            mov(eax,dword[rsp+REG64(GEN,evR as gpReg)])
                        elif evR is stack
                            mov(eax,dword[rsp+(evR as stack)])
                        else
                            failed("ExprCopy temp expr.right._type.isRef evR={evR}", expr.at)
                        if evL is gpReg
                            print("WARNING: TO STACK AS GPREG, VERIFY?\n")    // i think its dword[REG64...]
                            mov(dword[rsp+REG64(GEN,evL as gpReg)],eax)
                        elif evL is stack
                            mov(dword[rsp+(evL as stack)],eax)
                        else
                            failed("ExprCopy temp expr.right._type.isRef evL={evL}", expr.at)
                    else
                        failed("ExprCopy expr.right._type.isRef copySize={copySize}", expr.at)
                    log("(REF COPY {copySize})")
                else
                    failed("ExprCopy !expr.right._type.isRef", expr.at)
        log(")")
        return expr
// return
    def override preVisitExprReturn(expr:smart_ptr<ExprReturn>) : void
        log("(RETURN ")
    def override visitExprReturn(expr:smart_ptr<ExprReturn>) : ExpressionPtr
        log(")")
        with_xbyak(gen) <| $ ( GEN )
            if expr.subexpr==null
                gen_epilogue()
            elif expr.returnFlags.returnReference
                failed("ExprReturn expr.returnFlags.returnReference", expr.at)
            elif expr.returnFlags.returnInBlock
                failed("ExprReturn expr.returnFlags.returnInBlock", expr.at)
            elif expr.returnFlags.returnCallCMRES
                failed("ExprReturn expr.returnFlags.returnCallCMRES", expr.at)
            elif expr.returnFlags.returnCMRES
                failed("ExprReturn expr.returnFlags.returnCMRES", expr.at)
            elif expr.returnFlags.takeOverRightStack
                failed("ExprReturn expr.returnFlags.takeOverRightStack", expr.at)
            else
                let evR & = evResGet(expr.subexpr)
                if length(expr.subexpr._type.dim)!=0
                    failed("ExprReturn expr.subexpr._type.dim", expr.at)
                if expr.subexpr._type |> is_gpreg_type
                    let returnSize = expr.subexpr._type.sizeOf
                    if returnSize==1 || returnSize==2 || returnSize==4
                        if evR is gpReg
                            movd(xmm0,REG32(GEN,evR as gpReg))
                        elif evR is gpRegT
                            movd(xmm0,REG32(GEN,evR as gpRegT))
                        elif evR is iconst
                            mov(eax,evR as iconst)
                            movd(xmm0,eax)
                        else
                            failed("ExprReturn evR={evR}", expr.at)
                    else
                        failed("ExprReturn returnSize={returnSize}", expr.at)
                else
                    failed("ExprReturn {describe(expr.subexpr._type)}",expr.at)
            gen_epilogue()
        return expr
// block
    def override preVisitExprBlock(blk:smart_ptr<ExprBlock>) : void
        tab ++
    def override visitExprBlock(blk:smart_ptr<ExprBlock>) : ExpressionPtr
        tab --
        return blk
    def override preVisitExprBlockExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr): void
        log("{repeat("\t",tab)}")
    def override visitExprBlockExpression(blk:smart_ptr<ExprBlock>;expr:ExpressionPtr) : ExpressionPtr
        log("\n")
        return expr
// for
    def override preVisitExprFor(expr:smart_ptr<ExprFor>) : void
        log("(FOR ")
        loop_stack |> push(intptr(expr))
        if is_for_range1(expr)
            pass
        else
            failed("ExprFor !is_for_range1",expr.at)
    def override preVisitExprForVariable(expr:smart_ptr<ExprFor>;svar:VariablePtr;last:bool) : void
        log("`{svar.name}` ")
    def override preVisitExprForSource(expr:smart_ptr<ExprFor>;source:ExpressionPtr;last:bool) : void
        log("(SOURCE ")
    def override visitExprForSource(expr:smart_ptr<ExprFor>;source:ExpressionPtr;last:bool) : ExpressionPtr
        if is_for_range1(expr)
            let evS & = evResGet(source)
            with_xbyak(gen) <| $ ( GEN )
                if evS is xmmReg
                    let reg & = REGXMM(GEN,evS as xmmReg)
                    if context.temp_var |> key_exists(intptr(expr.iteratorVariables[0]))
                        let RV = context.temp_var[intptr(expr.iteratorVariables[0])]
                        if is_for_range1_with_unused_var(expr)
                            movd(eax,reg)
                            shufps(reg,reg,_MM_SHUFFLE(1,1,1,1))
                            movd(REG32(GEN,RV),reg)
                            sub(REG32(GEN,RV),eax)
                            jle(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                        else
                            movd(REG32(GEN,RV),reg)
                            shufps(reg,reg,_MM_SHUFFLE(1,1,1,1))
                            movd(eax,reg)
                            cmp(eax,REG32(GEN,RV))
                            jle(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                    else
                        let iSP = expr.iteratorVariables[0].stackTop
                        if is_for_range1_with_unused_var(expr)
                            movd(eax,reg)
                            shufps(reg,reg,_MM_SHUFFLE(1,1,1,1))
                            movd(ecx,reg)
                            sub(ecx,eax)
                            mov(dword[rsp+iSP],ecx)
                            jle(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                        else
                            movd(eax,reg)
                            mov(dword[rsp+iSP],eax)
                            shufps(reg,reg,_MM_SHUFFLE(1,1,1,1))
                            movd(ecx,reg)
                            cmp(ecx,eax)
                            jle(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                elif evS is skip
                    let rA = source as ExprCall
                    let rA0 & = evResGet(rA.arguments[0])
                    if context.temp_var |> key_exists(intptr(expr.iteratorVariables[0]))
                        let RV = context.temp_var[intptr(expr.iteratorVariables[0])]
                        if is_for_range1_with_unused_var(expr)
                            if length(rA.arguments)==1
                                copyReg32(RV, rA0, expr.at)
                                test(REG32(GEN,RV),REG32(GEN,RV))
                                jz(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                            else
                                let rA1 & = evResGet(rA.arguments[1])
                                copyReg32(RV, rA1, expr.at)
                                if rA0 is gpReg
                                    sub(REG32(GEN,RV),REG32(GEN,rA0 as gpReg))
                                elif rA0 is gpRegT
                                    sub(REG32(GEN,RV),REG32(GEN,rA0 as gpRegT))
                                else
                                    copyReg32(GpTempReg RAX, rA0, expr.at)
                                    sub(REG32(GEN,RV),eax)
                                jle(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                        else
                            if length(rA.arguments)==1
                                sub(REG32(GEN,RV),REG32(GEN,RV))
                                if rA0 is gpReg
                                    test(REG32(GEN,rA0 as gpReg),REG32(GEN,rA0 as gpReg))
                                elif rA0 is gpRegT
                                    test(REG32(GEN,rA0 as gpRegT),REG32(GEN,rA0 as gpRegT))
                                else
                                    copyReg32(GpTempReg RAX, rA0, expr.at)
                                    test(eax,eax)
                                jz(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                            else
                                let rA1 & = evResGet(rA.arguments[1])
                                copyReg32(RV, rA0, expr.at)
                                if rA1 is gpReg
                                    cmp(REG32(GEN,rA1 as gpReg),REG32(GEN,RV))
                                elif rA1 is gpRegT
                                    cmp(REG32(GEN,rA1 as gpRegT),REG32(GEN,RV))
                                else
                                    copyReg32(GpTempReg RAX, rA1, expr.at)
                                    cmp(eax,REG32(GEN,RV))
                                jle(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                    else
                        let iSP = expr.iteratorVariables[0].stackTop
                        if is_for_range1_with_unused_var(expr)
                            if length(rA.arguments)==1
                                copyReg32(GpTempReg RAX, rA0, expr.at)
                                mov(dword[rsp+iSP],eax)
                                test(eax,eax)
                                jz(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                            else
                                let rA1 & = evResGet(rA.arguments[1])
                                copyReg32(GpTempReg RAX, rA0, expr.at)
                                copyReg32(GpTempReg RCX, rA1, expr.at)
                                sub(ecx,eax)
                                mov(dword[rsp+iSP],ecx)
                                jle(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                        else
                            if length(rA.arguments)==1
                                copyReg32(GpTempReg RAX, rA0, expr.at)
                                mov(dword[rsp+iSP],0ul)
                                test(eax,eax)
                                jz(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                            else
                                let rA1 & = evResGet(rA.arguments[1])
                                copyReg32(GpTempReg RAX, rA0, expr.at)
                                copyReg32(GpTempReg RCX, rA1, expr.at)
                                mov(dword[rsp+iSP],eax)
                                cmp(ecx,eax)
                                jle(".for_loop_done_{intptr(expr)}",LabelType T_AUTO)
                else
                    failed("ExprFor is_for_range1 evS={evS}",expr.at)
        else
            failed("ExprFor !is_for_range1",expr.at)
        log(")")
        return source
    def override preVisitExprForBody(expr:smart_ptr<ExprFor>) : void
        with_xbyak(gen) <| $ ( GEN )
            align(16ul,true)
            L(".for_loop_{intptr(expr)}");  rdx_has_args = false
        log("\n")
    def override visitExprFor(expr:smart_ptr<ExprFor>) : ExpressionPtr
        if is_for_range1(expr)
            let evS & = evResGet(expr.sources[0])
            with_xbyak(gen) <| $ ( GEN )
                L(".for_loop_continue_{intptr(expr)}");  rdx_has_args = false
                let iSP = expr.iteratorVariables[0].stackTop
                if (evS is xmmReg) || (evS is skip)
                    if context.temp_var |> key_exists(intptr(expr.iteratorVariables[0]))
                        let RV = context.temp_var[intptr(expr.iteratorVariables[0])]
                        if is_for_range1_with_unused_var(expr)
                            dec(REG32(GEN,RV))
                        else
                            inc(REG32(GEN,RV))
                            if evS is xmmReg
                                movd(eax,REGXMM(GEN,evS as xmmReg))
                                cmp(REG32(GEN,RV),eax)
                            else
                                let ra = expr.sources[0] as ExprCall
                                let rA & = evResGet(ra.arguments[length(ra.arguments)==1 ? 0 : 1])
                                if rA is gpReg
                                    cmp(REG32(GEN,RV),REG32(GEN,rA as gpReg))
                                elif rA is gpRegT
                                    cmp(REG32(GEN,RV),REG32(GEN,rA as gpRegT))
                                else
                                    failed("ExprFor !is_for_range1 rA={rA}",expr.at)
                    else
                        if is_for_range1_with_unused_var(expr)
                            dec(dword[rsp+iSP])
                        else
                            inc(dword[rsp+iSP])
                            if evS is xmmReg
                                movd(eax,REGXMM(GEN,evS as xmmReg))
                                cmp(dword[rsp+iSP],eax)
                            else
                                let ra = expr.sources[0] as ExprCall
                                let rA & = evResGet(ra.arguments[length(ra.arguments)==1 ? 0 : 1])
                                if rA is gpReg
                                    cmp(dword[rsp+iSP],REG32(GEN,rA as gpReg))
                                elif rA is gpRegT
                                    cmp(dword[rsp+iSP],REG32(GEN,rA as gpRegT))
                                else
                                    failed("ExprFor !is_for_range1 rA={rA}",expr.at)
                    jnz(".for_loop_{intptr(expr)}",LabelType T_AUTO)
                else
                    failed("ExprFor is_for_range1 evS={evS}",expr.at)
        else
            failed("ExprFor !is_for_range1",expr.at)
        with_xbyak(gen) <| $ ( GEN )
            L(".for_loop_done_{intptr(expr)}");  rdx_has_args = false
        loop_stack |> pop()
        log("{repeat("\t",tab)})")
        return expr
// break
    def override visitExprBreak(expr:smart_ptr<ExprBreak>) : ExpressionPtr
        log("(BREAK)")
        let loop_ptr = loop_stack |> back
        with_xbyak(gen) <| $ ( GEN )
            jmp(".for_loop_done_{loop_ptr}",LabelType T_AUTO)
        return expr
// continue
    def override visitExprContinue(expr:smart_ptr<ExprContinue>) : ExpressionPtr
        log("(CONTINUE)")
        let loop_ptr = loop_stack |> back
        with_xbyak(gen) <| $ ( GEN )
            jmp(".for_loop_continue_{loop_ptr}",LabelType T_AUTO)
        return expr
// call
    def override preVisitExprCall(expr:smart_ptr<ExprCall>): void
        log("(CALL `{expr.name}` ")
    def override visitExprCall(var expr:smart_ptr<ExprCall>) : ExpressionPtr
        if !expr.func.flags.builtIn
            rdx_has_args = false            // rdx no longer has args, since we call another function
            with_xbyak(gen) <| $ ( GEN )
                let offset = context.tf_offset[intptr(expr)]
                for ai in range(length(expr.arguments))
                    let asize = expr.arguments[ai]._type.isRef ? 8 : expr.arguments[ai]._type.sizeOf
                    let eA & = evResGet(expr.arguments[ai])
                    if eA is gpReg
                        if asize==4
                            mov(dword[rsp+(offset+uint(ai)*16u)],REG32(GEN,eA as gpReg))
                        elif asize==8
                            mov(qword[rsp+(offset+uint(ai)*16u)],REG64(GEN,eA as gpReg))
                        else
                            error("ExprCall eA is gpReg, asize={asize}",expr.at)
                    elif eA is gpRegT
                        if asize==4
                            mov(dword[rsp+(offset+uint(ai)*16u)],REG32(GEN,eA as gpRegT))
                        elif asize==8
                            mov(qword[rsp+(offset+uint(ai)*16u)],REG64(GEN,eA as gpRegT))
                        else
                            error("ExprCall eA is gpRegT, asize={asize}",expr.at)
                    elif eA is iconst
                        if asize==4
                            mov(dword[rsp+(offset+uint(ai)*16u)],eA as iconst)
                        elif asize==8
                            mov(qword[rsp+(offset+uint(ai)*16u)],eA as iconst)
                        else
                            error("ExprCall eA is iconst, asize={asize}",expr.at)
                    else
                        error("ExprCall eA={eA}",expr.at)
                var MNH_ADDR : uint64
                unsafe
                    let mangled_name = get_mangled_name(reinterpret<FunctionPtr> expr.func)
                    let MNH = hash(mangled_name)
                    MNH_ADDR = get_function_address(MNH)
                log(" @@{MNH_ADDR} ")
                // save used transient registers
                let recursive_call = expr.func == this_function
                let transients = context.transients[intptr(expr)]
                var t_offset = 0u
                var t_total = 0
                log(" GP_MASK={transients.gp_mask} XMM_MASK={transients.xmm_mask}\n")
                var xmm_total = 0u
                for t in urange(FIRST_NON_TRANSIENT_XMM_TEMP_REG)
                    if (transients.xmm_mask & (1u<<t)) != 0u
                        xmm_total ++
                if xmm_total != 0u
                    sub(rsp,xmm_total * 16u)
                for t in urange(FIRST_NON_TRANSIENT_XMM_TEMP_REG)
                    if (transients.xmm_mask & (1u<<t)) != 0u
                        var txmm : XmmTempReg
                        unsafe
                            txmm = reinterpret<XmmTempReg> t
                        movdqa(ptr[rsp+t_offset],REGXMM(GEN,txmm))
                        t_offset += 16u
                for t in urange(FIRST_NON_TRANSIENT_GP_TEMP_REG)
                    if (transients.gp_mask & (1u<<t)) != 0u
                        var tgpr : GpTempReg
                        unsafe
                            tgpr = reinterpret<GpTempReg> t
                        push(REG64(GEN,tgpr))
                        t_offset += 8u
                        t_total ++
                if recursive_call
                    // setup arguments
                    let ctx_offset = getContextOffset()
                    if context.use_context                          // in recursive call, if context is not used - don't pass
                        mov(rcx,qword[rsp+(ctx_offset+t_offset)])   // rcx is Context *
                    lea(rdx,ptr[rsp+(offset+t_offset)])             // rdx is ARGS
                    // sub(r8,r8)                                   // r8 is CMRES
                else
                    // setup arguments
                    let ctx_offset = getContextOffset()
                    mov(rcx,uint64(MNH_ADDR))                   // rcx is MNH
                    lea(rdx,ptr[rsp+(offset+t_offset)])         // rdx is ARGS
                    mov(r8,ptr[rsp+(ctx_offset+t_offset)])      // r8  is Context *
                // call must be aligned, so if even number of transient registers is saved - we add extra 8 bytes
                sub(rsp,(t_total & 1) != 0 ? 40u : 32u)
                if recursive_call
                    call(func_begin)
                else
                    mov(rax,JIT_call_or_fastcall())
                    call(rax)
                // restore used transient registers
                add(rsp,(t_total & 1) != 0 ? 40u : 32u)
                for i_t in urange(FIRST_NON_TRANSIENT_GP_TEMP_REG)
                    let t = uint(FIRST_NON_TRANSIENT_GP_TEMP_REG) - i_t - 1u
                    if (transients.gp_mask & (1u<<t)) != 0u
                        unsafe
                            let tgpr = reinterpret<GpTempReg> t
                            pop(REG64(GEN,tgpr))
                var rt_offset = 0u
                for t in urange(FIRST_NON_TRANSIENT_XMM_TEMP_REG)
                    if (transients.xmm_mask & (1u<<t)) != 0u
                        var txmm : XmmTempReg
                        unsafe
                            txmm = reinterpret<XmmTempReg> t
                        movdqa(REGXMM(GEN,txmm),ptr[rsp+rt_offset])
                        rt_offset += 16u
                if xmm_total != 0u
                    add(rsp,xmm_total * 16u)
                // move result to xmm0
                if expr.func.result != null
                    if expr.func.result.isRef
                        error("ExprCall expr.func.result.isRef",expr.at)
                    elif expr.func.result.isVoid
                        pass    // if void - no output
                    else
                        let fnR & = evResGet(expr)
                        let asize = expr.func.result.sizeOf
                        if fnR is gpReg
                            if asize==4 || asize==2 || asize==1
                                movd(REG32(GEN,fnR as gpReg),xmm0)
                            elif asize==8
                                mov(REG64(GEN,fnR as gpReg),xmm0)
                            else
                                error("ExprCall rsize={asize}",expr.at)
                        else
                            error("ExprCall fnR={fnR}",expr.at)
            return expr
        ////////////////////
        // TODO: calls table
        let call_name = "{expr.func._module.name}::{expr.func.name}"
        if call_name=="$::range"
            JIT`range(expr)
        log(")")
        return expr
    /////////////////////
    // function templates
    def JIT`range(var expr:smart_ptr<ExprCall>)
        with_xbyak(gen) <| $ ( GEN )
            let evR & = evResGet(expr)
            if evR is skip
                // if skip is set, someone else is taking over the result and wants inputs
                return
            let xreg = evR as xmmReg
            // range(int)
            if length(expr.arguments)==1 && expr.arguments[0]._type.baseType==Type tInt
                let evA0 & = evResGet(expr.arguments[0])
                if evA0 is gpReg
                    shl(REG64(GEN,evA0 as gpReg),32)
                    movd(REGXMM(GEN,xreg),REG64(GEN,evA0 as gpReg))
                else
                    error("$::range evA0={evA0}",expr.at)
            // range(int,int)
            elif length(expr.arguments)==2 && expr.arguments[0]._type.baseType==Type tInt && expr.arguments[1]._type.baseType==Type tInt
                rdx_has_args = false
                let evA0 & = evResGet(expr.arguments[0])
                let evA1 & = evResGet(expr.arguments[1])
                if evA1 is gpReg
                    mov(edx,REG32(GEN,evA1 as gpReg))
                elif evA1 is gpRegT
                    mov(edx,REG32(GEN,evA1 as gpRegT))
                elif evA1 is iconst
                    mov(edx,(evA1 as iconst)<<32ul)
                else
                    error("$::range (evA1={evA1},...)",expr.at)
                if evA0 is gpReg
                    mov(eax,REG32(GEN,evA0 as gpReg))
                elif evA0 is gpRegT
                    mov(eax,REG32(GEN,evA0 as gpRegT))
                elif evA0 is iconst
                    mov(eax,evA0 as iconst)
                else
                    error("$::range (...,evA0={evA0})",expr.at)
                shl(rax,32)
                shrd(rax,rdx,uint8(32))
                movd(REGXMM(GEN,xreg),rax)
            log(" [{xreg}]")

