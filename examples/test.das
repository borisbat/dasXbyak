require dasxbyak/xbyak_boost

require rtti

def test_add(x,y:int)
    var pgen = with_xbyak <| $ ( gen )
        if xbyak32
            mov ( eax, ptr [ esp + 4 ] )
            add ( eax, y )
        elif xbyak64win
            lea ( rax, ptr [ rcx + y ] )
        else
            lea ( eax, ptr [ edi + y ] )
        ret()
    unsafe
        let result = *pgen |> eval_i(x)
        delete pgen
        return result

/*
    ecx - arg1
    edx - arg2
    r8  - arg3

    var pgen = with_xbyak <| $ ( gen )
        // mov(xmm0, rcx)       // context
        // movd(xmm0, rdx)      // arguments
        movd(xmm0, r8)          // arguments
        ret()

*/

variant CAST
    f4  : float4
    i   : int
    f   : float
    p   : void?

def test_invoke ( x:int; y:float )

    let STACK_FRAME_SIZE    =   0x40
    let STACK_FRAME_OFFSET  =   STACK_FRAME_SIZE + 8u

    let CMRES_OFFSET     =  24u
    let ARGUMENTS_OFFSET =  16u
    let CONTEXT_OFFSET   =  8u

    var pgen = with_xbyak <| $ ( gen )
        mov(ptr[rsp+CMRES_OFFSET],r8)
        mov(ptr[rsp+ARGUMENTS_OFFSET],rdx)
        mov(ptr[rsp+CONTEXT_OFFSET],rcx)
        push(rdi)
        sub(rsp,STACK_FRAME_SIZE)
        movsd(xmm0, ptr[rsp+(CONTEXT_OFFSET+STACK_FRAME_OFFSET)])
        add(rsp,STACK_FRAME_SIZE)
        pop(rdi)
        ret()
    var args : CAST[2]
    args[0] = [[CAST i=x]]
    args[1] = [[CAST f=y]]
    unsafe
        var TEMP : int
        print("INPUT:\n")
        print("\targs    = {intptr(addr(args[0]))}\n")
        print("\tcontext = {intptr(get_ptr(addr(this_context())))}\n")
        print("\ttemp    = {intptr(addr(TEMP))}\n")
        let result = * pgen |> invoke_code(args,addr(TEMP))
        delete pgen
        var cresult = [[CAST f4=result]]
        print("RESULT:\n")
        print("\tfloat4 = {cresult.f4}\n")
        print("\tint    = {cresult.i}\n")
        print("\tfloat  = {cresult.f}\n")
        print("\tvoid * = {cresult.p}\n")

/*
    RBX, RBP, RDI, RSI, RSP, R12, R13, R14, R15, and XMM6-XMM15
*/

def jit_mad_ref
    let STACK_FRAME_SIZE    =   0x40
    let STACK_FRAME_OFFSET  =   STACK_FRAME_SIZE + 8u

    let CMRES_OFFSET     =  24u
    let ARGUMENTS_OFFSET =  16u
    let CONTEXT_OFFSET   =  8u

    let X_ARG_INDEX = 0u
    let Y_ARG_INDEX = 1u
    let Z_ARG_INDEX = 2u

    var pgen = with_xbyak <| $ ( gen )
        sub(rsp,STACK_FRAME_SIZE)
        mov(ptr[rsp+CMRES_OFFSET],r8)
        mov(ptr[rsp+ARGUMENTS_OFFSET],rdx)
        mov(ptr[rsp+CONTEXT_OFFSET],rcx)
        mov(rax,ptr[rsp+ARGUMENTS_OFFSET])
        mov(r9d,ptr[rax+(X_ARG_INDEX*16u)])
        mov(rax,ptr[rsp+ARGUMENTS_OFFSET])
        mov(r10d,ptr[rax+(Y_ARG_INDEX*16u)])
        mov(rax,ptr[rsp+ARGUMENTS_OFFSET])
        mov(r11d,ptr[rax+(Z_ARG_INDEX*16u)])
        mov(eax,r9d)
        imul(r10d)
        add(eax,r11d)
        movd(xmm0, eax)
        add(rsp,STACK_FRAME_SIZE)
        ret()
    unsafe
        let err = reinterpret<GenerationError> GetError()
        if err != GenerationError NONE
            panic("xbyak - generation error {err}")
        var jit_mad = reinterpret<function> @@test_mad
        *pgen |> instrument_jit(jit_mad)

def jit_mad
    let X_ARG_INDEX = 0u
    let Y_ARG_INDEX = 1u
    let Z_ARG_INDEX = 2u
    var pgen = with_xbyak <| $ ( gen )
        mov(r9d ,ptr[rdx+(X_ARG_INDEX*16u)])
        mov(r10d,ptr[rdx+(Y_ARG_INDEX*16u)])
        mov(r11d,ptr[rdx+(Z_ARG_INDEX*16u)])
        mov(eax,r9d)
        imul(r10d)
        add(eax,r11d)
        movd(xmm0, eax)
        ret()
    unsafe
        let err = reinterpret<GenerationError> GetError()
        if err != GenerationError NONE
            panic("xbyak - generation error {err}")
        *pgen |> instrument_jit(reinterpret<function> @@test_mad)

[sideeffects]
def test_mad(x, y, z: int)
    return x * y + z

[export]
def main
    print("interpreting\n")
    verify(test_mad(2,3,4)==10)
    let t0 = profile(20,"simulated") <|
        for i in range(100)
            for j in range(100)
                for k in range(1000)
                    test_mad(i, j, k)
    print("interpreted: {t0}\n")
    print("jitting\n")
    jit_mad()
    verify(test_mad(2,3,4)==10)
    let t1 = profile(20,"simulated") <|
        for i in range(100)
            for j in range(100)
                for k in range(1000)
                    test_mad(i, j, k)
    print("jit: {t1}\n")
