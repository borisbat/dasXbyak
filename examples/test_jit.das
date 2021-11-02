require jit_x86_64

require testProfile

require dasxbyak/xbyak_boost
require zydis

[sideeffects]
def fibI(n:int)
    var last = 0
    var cur = 1
    for i in range( n-1)
        let tmp = cur
        cur += last
        last = tmp
    return cur

[jit_x86_64]
def fibI_jit(n:int)
    var last = 0
    var cur = 1
    for i in range(n-1)
        let tmp = cur
        cur += last
        last = tmp
    return cur

[init]
def jit_fibI_asm
    let N_ARG_INDEX = 0u
    // r9d  =   n
    // r10d =   last
    // r11d =   cur
    var pgen = with_xbyak <| $ ( gen )
        inLocalLabel()
        let n & = r9d
        let last & = r10d
        let cur & = r11d
        let i & = ecx
        mov(n ,ptr[rdx+(N_ARG_INDEX*16u)])          // n
        dec(n)                                      // n--
        mov(last,0ul)                               // last = 0
        mov(cur,1ul)                                // cur = 1
        mov(i,0ul)                                  // i = 0
        align(16ul,true)
        L(".for_loop")                              // for_loop:
        mov(eax,cur)                                //  t = cur
        add(cur,last)                               //  cur += last
        mov(last,eax)                               //  last = tmp
        inc(i)                                      //  i ++
        cmp(i,n)                                    //  if i != n
        jne(".for_loop",LabelType T_AUTO)           //      goto for_loop
        movd(xmm0,cur)                              //  return cur
        ret()
        outLocalLabel()
    unsafe
        let err = reinterpret<GenerationError> GetError()
        if err != GenerationError NONE
            panic("xbyak - generation error {err}")
        let data = *pgen |> get_code()
        let dataLength = *pgen |> getSize()
        // disassemble(data, dataLength)
        *pgen |> instrument_jit(reinterpret<function> @@fibI_asm)

[sideeffects]
def fibI_asm(n:int)
    panic("we should not be here")
    return 0

def test_fibi
    var f1 = 0
    profile(20,"fibbonacci loop - interpreted") <|
        f1 = fibI(6511134)
    var f2 = 0
    profile(20,"fibbonacci loop - jit") <|
        f2 = fibI_jit(6511134)
    var f3 = 0
    profile(20,"fibbonacci loop - manually assembled") <|
        f3 = fibI_asm(6511134)
	var f4 = 0
    profile(20,"fibbonacci loop c++") <|
        f4 = testProfile::testFibI(6511134)
    assert(f1==f2)
    assert(f1==f3)
	assert(f1==f4)

[sideeffects]
def fibR(n:int)
    if (n < 2)
        return n
    return fibR(n - 1) + fibR(n - 2)

[jit_x86_64]
def fibR_jit(n:int)
    if (n < 2)
        return n
    return fibR_jit(n - 1) + fibR_jit(n - 2)

[export]
def main
    if true
        print("fibI_jit(5) = {fibI_jit(5)}\n")
        print("fibR_jit(5) = {fibR_jit(5)}\n")
    if false
        test_fibi()

