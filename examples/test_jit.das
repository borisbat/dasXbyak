require jit_x86_64

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
    var last : int // = 0
    var cur = 1
    for i in range(n-1)
        let tmp = cur
        cur += last
        last = tmp
    return cur

/*
	0x20	4	let last, line 17
	0x30	4	let cur, line 18
	0x40	4	for i, line 19
	0x50	4	let tmp, line 20

            last    cur
iter_1      1       1
iter_2      1       2
iter_3      2       3
iter_5      3       5

// fibI_jit fibI_jit Ci
(Block
	(InitLocal #32 0x4)
	(Set_TT<int> (GetLocal #48) (ConstValue {1,0,0,0}))
	(ForRangeNF
		#64
		(Range1Ctor (Sub_TT<int> (GetArgument #0) (ConstValue {1,0,0,0})))
		(CopyRefValue (GetLocal #80) (GetLocal #48) 0x4)
		(SetAdd_TT<int> (GetLocal #48) (GetLocalR2V_TT<int> #32))
		(CopyRefValue (GetLocal #32) (GetLocal #80) 0x4)
		)
	(Return (GetLocalR2V_TT<int> #48))
	)
*/


require dasxbyak/xbyak_boost
require zydis

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

[export]
def main
    /*
    print("fibI_jit(5) = {fibI_jit(13)}\n")
    return
    */

    print("fibI(5)     = {fibI(13)}\n")
    print("fibI_jit(5) = {fibI_jit(13)}\n")
    print("fibI_asm(5) = {fibI_asm(13)}\n")

    var f1 = 0
    profile(20,"fibbonacci loop - interpreted") <|
        f1 = fibI(6511134)
    var f2 = 0
    profile(20,"fibbonacci loop - jit") <|
        f2 = fibI_jit(6511134)
    var f3 = 0
    profile(20,"fibbonacci loop - manually assembled") <|
        f3 = fibI_asm(6511134)
    assert(f1==f2)
    assert(f1==f3)

// options log_stack
