
options rtti
require jit/jit_x86_64
require jit/jit_x86_64_test

[jit_x86_64]
def sub_jit ( a, b: int )
    return a - b

[jit_x86_64]
def add_jit ( a, b: int )
    return a + b

[jit_x86_64]
def sub_equ_jit ( a, b: int )
    var c = a
    c -= b
    return c

[jit_x86_64]
def add_equ_jit ( a, b: int )
    var c = a
    c += b
    return c

[test]
def test_add_sub(t: T?)
    test_jit_levels(t.verbose) <|
        verify_jit(t, @@add_jit)
        verify_jit(t, @@sub_jit)
        for i in range(-100,100)
            for j in range(-100,100)
                if j != 0
                    if !equal(t, add_jit(i,j), i+j)
                        t->log("when add {i} {j}")
                    if !equal(t, sub_jit(i,j), i-j)
                        t->log("when sub {i} {j}")

[test]
def test_add_sub_equ(t: T?)
    test_jit_levels(t.verbose) <|
        verify_jit(t, @@add_equ_jit)
        verify_jit(t, @@sub_equ_jit)
        for i in range(-100,100)
            for j in range(-100,100)
                if j != 0
                    if !equal(t, add_equ_jit(i,j), i+j)
                        t->log("when add equ {i} {j}")
                    if !equal(t, sub_equ_jit(i,j), i-j)
                        t->log("when sub equ {i} {j}")

[export]
def main
    let t = add_jit(2,3)
    print("t = {t}\n")