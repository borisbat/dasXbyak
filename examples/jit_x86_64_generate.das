options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64_generate public

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

class GenerateCodeVisitor : AstVisitor
    verbose = true
    tab : int
    [[do_not_delete]] gen : CodeGenerator?
    context : EvContext
    [[do_not_delete]] this_function : Function?
    func_begin : void?
    rdx_has_args : bool                             // rdx contains arg *, as part of the parameters passed
    failed_to_generate : bool
    def GenerateCodeVisitor(var g:CodeGenerator?; var ctx:EvContext )
        gen = g
        context <- ctx
    def error ( txt:string; at:LineInfo )
        failed_to_generate = true
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nERROR jit_x86_64(generate): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
        stackwalk(false,false)
    def failed ( txt:string; at:LineInfo )
        failed_to_generate = true
        let fname = at.fileInfo!=null ? "{at.fileInfo.name}" : ""
        print("\nTODO jit_x86_64(generate): {txt} at {fname}:{int(at.line)}:{int(at.column)}\n")
        stackwalk(false,false)
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
// exception
    def JIT`exception(text:string):void
        with_xbyak(gen) <| $ ( GEN )
            let ctx_offset = self->getContextOffset()
            mov(rcx,jit_generate_const_string(text))    // rcx is exception text
            mov(rdx,ptr[rsp+ctx_offset])                // rdx is Context *
            sub(rsp,32u)
            mov(rax,JIT_exception())
            call(rax)
            add(rsp,32u)
// helpers
    def copyReg32 ( reg:GpTempReg; eV:EvResult; at:LineInfo ) : void
        with_xbyak(gen) <| $ ( GEN )
            if eV is gpReg
                if reg != eV as gpReg
                    mov(REG32(GEN,reg),REG32(GEN,eV as gpReg))
            else
                self->failed("supprt copy reg32 {eV}", at)
        self->check_gen()
// function
    def override preVisitFunction(fun:FunctionPtr) : void
        if verbose
            print("(DEF {fun.name} [STACK={context.stack_frame}, TEMP={context.temp_frame}]\n")
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
                            mov(REG32(GEN,reg),dword[REG64(GEN,evI as gpReg)])
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
                            if !rdx_has_args
                                mov(rdx,ptr[rsp+self->getArgOffset()])
                                rdx_has_args
                            if varSize==8
                                mov(REG64(GEN,reg),qword[rdx+(expr.argumentIndex*16)])
                            elif varSize==4
                                mov(REG32(GEN,reg),dword[rdx+(expr.argumentIndex*16)])
                            else
                                self->failed("{expr.variable.name} support argument R2V size of {varSize}", expr.at)
                        else
                            self->failed("{expr.variable.name} support argument R2V type {describe(expr.variable._type)}", expr.at)
                    else
                        self->failed("{expr.variable.name} support local R2V type {describe(expr.variable._type)}", expr.at)
                else
                    if ev is gpReg
                        if !rdx_has_args
                            mov(rdx,ptr[rsp+self->getArgOffset()])
                            rdx_has_args
                        lea(REG64(GEN,ev as gpReg),qword[rdx+(expr.argumentIndex*16)])
                    else
                        self->failed("{expr.variable.name} support argument ref in {ev}", expr.at)
            else
                self->failed("{expr.variable.name} support that other variable type", expr.at)
        self->check_gen()
        if verbose
            print(")")
        return expr
// op1
    def override preVisitExprOp1(expr:smart_ptr<ExprOp1>) : void
        if verbose
            print("(OP1 {expr.op} ")
    def override visitExprOp1(expr:smart_ptr<ExprOp1>) : ExpressionPtr
        var ev & = context.expr_res[intptr(expr.subexpr)]
        var evOP1 & = context.expr_res[intptr(expr)]
        with_xbyak(gen) <| $ ( GEN )
            if expr.subexpr._type.isInteger
                if expr.subexpr._type.baseType==Type tInt
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
                                self->failed("{describe(expr.subexpr)} support {expr.op}", expr.at)
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
                                self->failed("{describe(expr.subexpr)} support {expr.op}", expr.at)
                        else
                            self->failed("{describe(expr.subexpr)} support {expr.op}", expr.at)
                    else
                        self->failed("{describe(expr.subexpr)} support non ref op", expr.at)
                else
                    self->failed("{describe(expr.subexpr)} support all other types", expr.at)
            else
                self->failed("{describe(expr.subexpr)} support all other types", expr.at)
        if verbose
            print(")")
        return expr
// op2
    def override preVisitExprOp2(expr:smart_ptr<ExprOp2>): void
        if verbose
            print("(OP2 {expr.op} ")
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
                            if expr.op=="<" || expr.op=="=="
                                if evL is gpReg
                                    // result is in the left register, which we reused during allocation
                                    if evR is iconst
                                        let ic = uint(evR as iconst)
                                        if expr.op=="<" || expr.op=="=="
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
                                            elif expr.op=="<"
                                                cmp(REG32(GEN,evL as gpReg),ic)
                                                mov(REG32(GEN,evL as gpReg),0ul)
                                                mov(eax,1ul)
                                                cmovl(REG32(GEN,evL as gpReg),eax)
                                            elif expr.op=="=="
                                                cmp(REG32(GEN,evL as gpReg),ic)
                                                mov(REG32(GEN,evL as gpReg),0ul)
                                                mov(eax,1ul)
                                                cmove(REG32(GEN,evL as gpReg),eax)
                                            else
                                                self->failed("{expr.op} unsupported here", expr.at)
                                    elif evR is gpReg
                                        if expr.op=="+"
                                            add(REG32(GEN,evL as gpReg),REG32(GEN,evR as gpReg))
                                        elif expr.op=="-"
                                            sub(REG32(GEN,evL as gpReg),REG32(GEN,evR as gpReg))
                                        elif expr.op=="%" || expr.op=="/"
                                            cmp(REG32(GEN,evR as gpReg),0u)
                                            jne(".div_{intptr(expr)}",LabelType T_AUTO)
                                            self->JIT`exception("division by zero")
                                            L(".div_{intptr(expr)}")
                                            mov(eax,REG32(GEN,evL as gpReg))
                                            cdq();  rdx_has_args = false
                                            idiv(REG32(GEN,evR as gpReg))
                                            mov(REG32(GEN,evL as gpReg),expr.op=="%" ? edx : eax)
                                        else
                                            self->failed("OP2 {expr.op} int imm gpREG R {debug(evR)}", expr.at)
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
                                        if expr.op=="%" || expr.op=="/"
                                            rdx_has_args = false
                                            // left
                                            if evL is gpReg
                                                mov(eax,REG32(GEN,evL as gpReg))
                                            elif evL is gpRegT
                                                mov(eax,REG32(GEN,evL as gpRegT))
                                            else
                                                self->failed("OP2 {expr.op} int {evOP2} = {evL} {expr.op} R? {evR} {describe(expr)}", expr.at)
                                            // right
                                            if expr.op=="%"
                                                if evR is iconst
                                                    mov(ecx,evR as iconst)
                                                elif evR is gpReg
                                                    mov(ecx,REG32(GEN,evR as gpReg))
                                                elif evR is gpRegT
                                                    mov(ecx,REG32(GEN,evR as gpRegT))
                                                else
                                                    self->failed("OP2 {expr.op} int {evOP2} = {evL} {expr.op} R? {evR} {describe(expr)}", expr.at)
                                                cmp(ecx,0u)
                                                jnz(".div_{intptr(expr)}",LabelType T_AUTO)
                                                self->JIT`exception("division by zero")
                                                L(".div_{intptr(expr)}")
                                                cdq();  rdx_has_args = false
                                                idiv(ecx)
                                            else
                                                self->failed("OP2 {expr.op} int {evOP2} = {evL} {expr.op} R? {evR} {describe(expr)}", expr.at)
                                            //  EDX:EAX / ECX. Quotient saved to EAX, remainder in EDX
                                            mov(REG32(GEN,evOP2 as gpReg),expr.op=="%" ? edx : eax)
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
                                                elif expr.op=="-"
                                                    sub(REG32(GEN,evOP2 as gpReg),uint(evR as iconst))
                                                else
                                                    self->failed("OP2 {expr.op} int {evOP2} = {evL} {expr.op} R? {evR} {describe(expr)}", expr.at)
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
// if-then-else
    def override preVisitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>) : void
        if verbose
            tab ++
            print("(IF\n{repeat("\t",tab)}")
    def override preVisitExprIfThenElseIfBlock(expr:smart_ptr<ExprIfThenElse>;ifBlock:ExpressionPtr) : void
        let evS & = context.expr_res[intptr(expr.cond)]
        with_xbyak(gen) <| $ ( GEN )
            if evS is gpReg
                test(REG32(GEN,evS as gpReg),REG32(GEN,evS as gpReg))
                jz(".if_true_{intptr(expr)}",LabelType T_NEAR)
            elif evS is cmp
                GEN |> condJumpIfNot(".if_true_{intptr(expr)}",evS as cmp)
            else
                self->failed("supprt if-then-else subexpr in {evS}", expr.at)
        self->check_gen()
        if verbose
            print("\n{repeat("\t",tab)}THEN\n")
    def override preVisitExprIfThenElseElseBlock(expr:smart_ptr<ExprIfThenElse>;elseBlock:ExpressionPtr) : void
        with_xbyak(gen) <| $ ( GEN )
            jmp(".if_end_{intptr(expr)}",LabelType T_NEAR)
            L(".if_true_{intptr(expr)}")
        self->check_gen()
        if verbose
            print("\n{repeat("\t",tab)}ELSE\n")
    def override visitExprIfThenElse(expr:smart_ptr<ExprIfThenElse>) : ExpressionPtr
        with_xbyak(gen) <| $ ( GEN )
            if expr.if_false==null
                L(".if_true_{intptr(expr)}")
            L(".if_end_{intptr(expr)}")
        self->check_gen()
        if verbose
            tab --
            print(")\n{repeat("\t",tab)}")
        return expr
// op3
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
// break
    def override visitExprBreak(expr:smart_ptr<ExprBreak>) : ExpressionPtr
        if verbose
            print("(BREAK)")
        return expr
// continue
    def override visitExprContinue(expr:smart_ptr<ExprContinue>) : ExpressionPtr
        if verbose
            print("(CONTINUE)")
        return expr
// call
    def override preVisitExprCall(expr:smart_ptr<ExprCall>): void
        if verbose
            print("(CALL `{expr.name}` ")
    def override visitExprCall(var expr:smart_ptr<ExprCall>) : ExpressionPtr
        if !expr.func.flags.builtIn
            rdx_has_args = false            // rdx no longer has args, since we call another function
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
                            self->error("TODO: support reg call argument size {asize}",expr.at)
                    elif eA is iconst
                        if asize==4
                            mov(dword[rsp+(offset+uint(ai)*16u)],eA as iconst)
                        elif asize==8
                            mov(qword[rsp+(offset+uint(ai)*16u)],eA as iconst)
                        else
                            self->error("TODO: support iconst call argument size {asize}",expr.at)
                    else
                        self->error("TODO: support call argument size {eA} {describe(expr.arguments[ai]._type)}",expr.at)
                var MNH_ADDR : uint64
                unsafe
                    let mangled_name = get_mangled_name(reinterpret<FunctionPtr> expr.func)
                    let MNH = hash(mangled_name)
                    MNH_ADDR = get_function_address(MNH)
                if verbose
                    print(" @@{MNH_ADDR} ")
                // save used transient registers
                let recursive_call = expr.func == this_function
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
                if recursive_call
                    // setup arguments
                    let ctx_offset = self->getContextOffset()
                    if context.use_context                          // in recursive call, if context is not used - don't pass
                        mov(rcx,qword[rsp+(ctx_offset+t_offset)])   // rcx is Context *
                    lea(rdx,ptr[rsp+(offset+t_offset)])             // rdx is ARGS
                    // sub(r8,r8)                                   // r8 is CMRES
                else
                    // setup arguments
                    let ctx_offset = self->getContextOffset()
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
                add(rsp,(t_total & 1) != 0 ? 40u : 32u)
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
                    elif expr.func.result.isVoid
                        pass    // if void - no output
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
            self->JIT`range(expr)
        if verbose
            print(")")
        return expr
    /////////////////////
    // function templates
    def JIT`range(var expr:smart_ptr<ExprCall>)
        with_xbyak(gen) <| $ ( GEN )
            let evR & = context.expr_res[intptr(expr)]
            let xreg = evR as xmmReg
            // range(int)
            if length(expr.arguments)==1 && expr.arguments[0]._type.baseType==Type tInt
                let evA0 & = context.expr_res[intptr(expr.arguments[0])]
                if evA0 is gpReg
                    shl(REG64(GEN,evA0 as gpReg),32)
                    movd(REGXMM(GEN,xreg),REG64(GEN,evA0 as gpReg))
                else
                    self->error("TODO: support range(1) argument {evA0}",expr.at)
            // range(int,int)
            elif length(expr.arguments)==2 && expr.arguments[0]._type.baseType==Type tInt && expr.arguments[1]._type.baseType==Type tInt
                let evA0 & = context.expr_res[intptr(expr.arguments[0])]
                let evA1 & = context.expr_res[intptr(expr.arguments[1])]
                if evA0 is gpReg
                    mov(eax,REG32(GEN,evA0 as gpReg))
                    shl(rax,32)
                elif evA0 is iconst
                    mov(rax,(evA0 as iconst)<<32ul)
                else
                    self->error("TODO: support range(2) argument ({evA0},...)",expr.at)
                if evA1 is gpReg
                    mov(eax,REG32(GEN,evA1 as gpReg))
                elif evA1 is gpRegT
                    mov(eax,REG32(GEN,evA1 as gpRegT))
                else
                    self->error("TODO: support range(2) argument (...,{evA1})",expr.at)
                movd(REGXMM(GEN,xreg),rax)
            self->check_gen()
            if verbose
                print(" [{xreg}]")
