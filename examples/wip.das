options rtti
require jit/jit_x86_64
require jit/jit_x86_64_test

[jit_x86_64]
def imul3_local_jit ( a, b, c: int )
    // this one generates lea for a 3-way imul
    let A = a
    let B = b
    let C = c
    return A * B * C

[export]
def main
    let t = imul3_local_jit(-10,-9,-10)
    print("t = {t}\n")
