options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module jit_x86_64_generate_base shared public

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

class GenerateCodeVisitorBase : JitVisitor
    [[do_not_delete]] gen : CodeGenerator?
    rdx_has_args : bool                             // rdx contains arg *, as part of the parameters passed
    def GenerateCodeVisitorBase(var g:CodeGenerator?; var ctx:EvContext )
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
    def copyReg32 ( dest:GpTempReg; srcV:EvResult; at:LineInfo ) : void                         //  mov reg32, data
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
                failed("copyReg32 mov({dest},{srcV})", at)
    def cmpRegAny32 ( left:GpTempReg; right:EvResult; cop:CompareType; at:LineInfo ) : void                      //  cmp reg32, *
        with_xbyak(gen) <| $ ( GEN )
            if right is gpReg
                cmp(REG32(GEN,left),REG32(GEN,right as gpReg))
            elif right is gpRegT
                cmp(REG32(GEN,left),REG32(GEN,right as gpRegT))
            elif right is iconst
                cmp(REG32(GEN,left),uint(right as iconst))
            elif right is stack
                cmp(REG32(GEN,left),ptr[rsp+(right as stack)])
            else
                failed("cmpReg32 cmp({left},{right})  // {cop}", at)
    def cmpAnyReg32 ( left:EvResult; right:GpTempReg; cop:CompareType; spill:GpTempReg; at:LineInfo ) : void     //  cmp *, reg32
        with_xbyak(gen) <| $ ( GEN )
            if left is gpReg
                cmp(REG32(GEN,left as gpReg),REG32(GEN,right))
            elif left is gpRegT
                cmp(REG32(GEN,left as gpRegT),REG32(GEN,right))
            elif left is iconst
                mov(REG32(GEN,spill),left as iconst)
                cmp(REG32(GEN,spill),REG32(GEN,right))
            elif left is stack
                cmp(ptr[rsp+(left as stack)],REG32(GEN,right))
            else
                failed("cmpReg32 cmp({left},{right}) // {cop}", at)
    def cmpStackAny32 ( iSP:int; righ:EvResult; cop:CompareType; spill:GpTempReg; at:LineInfo ) : void     //  cmp [rsp+xxx], *
        with_xbyak(gen) <| $ ( GEN )
            if righ is gpReg
                cmp(dword[rsp+iSP],REG32(GEN,righ as gpReg))
            elif righ is gpRegT
                cmp(dword[rsp+iSP],REG32(GEN,righ as gpRegT))
            elif righ is iconst
                cmp(dword[rsp+iSP],uint(righ as iconst))
            elif righ is stack
                mov(REG32(GEN,spill),dword[rsp+(righ as stack)])
                cmp(dword[rsp+iSP],REG32(GEN,spill))
            else
                failed("cmpStackAny32 cmp([rsp+{iSP}],{righ}) // {cop}",at)
    def cmpAnyAny32 ( left, right : EvResult; cop:CompareType; spill:GpTempReg; at:LineInfo ) : void     //  cmp *, *
        if left is gpReg
            cmpRegAny32(left as gpReg,right,cop,at)
        elif left is gpRegT
            cmpRegAny32(left as gpRegT,right,cop,at)
        elif right is gpReg
            cmpAnyReg32(left,right as gpReg,cop,spill,at)
        elif right is gpRegT
            cmpAnyReg32(left,right as gpRegT,cop,spill,at)
        else
            failed("cmpAnyAny32 cmp({left},{right}) // {cop}", at)
    def setRdxToArgs()
        if !rdx_has_args
            with_xbyak(gen) <| $ ( GEN )
                mov(rdx,ptr[rsp+getArgOffset()])
                rdx_has_args
