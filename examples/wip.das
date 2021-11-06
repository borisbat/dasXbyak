options rtti
require jit/jit_x86_64

[jit_x86_64(no_exceptions,asm)]
def fibR_jit(n:int)
    if (n < 2)
        return n
    return fibR_jit(n - 1) + fibR_jit(n - 2)

[export]
def main
    var f3_j = 0
    profile(20,"fibbonacci recursive - jit") <|
        f3_j = fibR_jit(31)
    assert(f3_j==1346269)
