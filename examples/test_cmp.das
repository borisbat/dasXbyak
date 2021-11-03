require jit_x86_64

require testProfile

require dasxbyak/xbyak_boost
require zydis


[jit_x86_64]
def fibR_jit(n:int)
    if (n < 2)
        return n
    return fibR_jit(n - 1) + fibR_jit(n - 2)

[export]
def main
    if true
        print("fibR_jit(5) = {fibR_jit(5)} - expecting 5\n")

