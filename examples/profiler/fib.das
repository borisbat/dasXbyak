// options log=true, print_var_access=true, print_ref=true

require testProfile

options rtti
require jit/jit_x86_64

[sideeffects]
def fibR(n:int)
    if (n < 2)
        return n
    return fibR(n - 1) + fibR(n - 2)

[jit_x86_64(asm)]
def fibR_jit(n:int)
    if (n < 2)
        return n
    return fibR_jit(n - 1) + fibR_jit(n - 2)

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

include profile_common.inc

[export]
def main()

    return

    var f1 = 0
    profile(20,"fibbonacci loop") <|
        f1 = fibI(6511134)
    assert(f1==1781508648)
    var f4 = 0
    profile(20,"fibbonacci loop c++") <|
        f4 = testProfile::testFibI(6511134)
    assert(f4==1781508648)
    var f3 = 0
    profile(20,"fibbonacci recursive") <|
        f3 = fibR(31)
    assert(f3==1346269)
    var f5 = 0
    profile(20,"fibbonacci recursive c++") <|
        f5 = testProfile::testFibR(31)
    assert(f5==1346269)
    test_jit_levels <|
        var f1_j = 0
        profile(20,"fibbonacci loop - jit") <|
            f1_j = fibI_jit(6511134)
        assert(f1_j==1781508648)
        var f3_j = 0
        profile(20,"fibbonacci recursive - jit") <|
            f3_j = fibR_jit(31)
        assert(f3_j==1346269)

