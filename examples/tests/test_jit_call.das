options rtti
require jit/jit_x86_64

var A, B : int

def output_result(a,b:int)
    print("a={a} b={b}\n")
    A = a
    B = b
    return 123

[jit_x86_64]
def test_call(n:int)
    let q = output_result(n,n+1)
    return q + 1

[export]
def main
    let t = test_call(13)
    print("t = {t}\n")
    assert(t==124)
    assert(A==13 && B==14)


