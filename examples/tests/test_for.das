options rtti
require jit/jit_x86_64

include test_common.inc

var seq : array<int>

def verify_seq(var t:array<int>)
    print("{seq} vs reference {t}\n")
    if length(seq)!=length(t)
        print("sequence length mismatch")
        assert(false)
    for T,S in t,seq
        assert(T==S)
    delete seq
    delete t

def printreg(t:int)
    seq |> push(t)

[jit_x86_64]
def test_range(a,b:int)
    for t in range(a,b)
        printreg(t)

[jit_x86_64]
def test_break(a,b,c:int)
    for t in range(a,b)
        printreg(t)
        if t==c
            break

[jit_x86_64]
def test_continue(a,b:int)
    for t in range(a,b)
        if t % 2 == 0
            continue
        printreg(t)

[export]
def main()
    /*
    JIT_MAX_OPT_LEVEL = 0
    all`things`jit()
    print("test_continue(0,10)\n")
    test_continue(0,10);    verify_seq([{for t in range(0,10); t; where t % 2 != 0}])
    */

    test_jit_levels <|
        print("test_range(0,5)\n")
        test_range(0,5);    verify_seq([{for t in range(0,5); t}])
        print("test_range(2,5)\n")
        test_range(2,5);    verify_seq([{for t in range(2,5); t}])
        print("test_range(5,5)\n")
        test_range(5,5);    verify_seq([{for t in range(5,5); t}])
        print("test_range(50,5)\n")
        test_range(50,5);    verify_seq([{for t in range(50,5); t}])
        print("test_range(-2,5)\n")
        test_range(-2,5);    verify_seq([{for t in range(-2,5); t}])
        print("test_range(-2,-3)\n")
        test_range(-2,-3);    verify_seq([{for t in range(-2,-3); t}])
        print("test_range(-3,-2)\n")
        test_range(-3,-2);    verify_seq([{for t in range(-3,-2); t}])
        print("test_break(0,10,4)\n")
        test_break(0,10,4);    verify_seq([{for t in range(0,10); t; where t<=4}])
        print("test_continue(0,10)\n")
        test_continue(0,10);    verify_seq([{for t in range(0,10); t; where t % 2 != 0}])
