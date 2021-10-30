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

[export]
def main
    let t = test_add(2,3)
    print("t = {t}\n")

    test_invoke(1,2.)

