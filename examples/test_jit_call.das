require jit_x86_64

def output_result(a,b:int)
    print("a={a} b={b}\n")
    return 123

[jit_x86_64]
def test_call(n:int)
    let q = output_result(n,n+1)
    return q + 1

/*
// test_call test_call Ci
(FastCall "output_result" @@output_result Ci Ci
    (GetArgument #0)
    (Add_TT<int> (GetArgument #0) (ConstValue {1,0,0,0}))
)
*/

/*
[sideeffects]
def fibR(n:int)
    if (n < 2)
        return n
    return fibR(n - 1) + fibR(n - 2)

[jit_x86_64]
def fibR_jit(n:int)
    if (n < 2)
        return n
    return fibR(n - 1) + fibR(n - 2)
*/

[export]
def main

    let t = test_call(13)
    print("t = {t}\n")

/*
    print("fibR(5)     = {fibR(5)}\n")
    print("fibR_jit(5) = {fibR_jit(5)}\n")
*/
    /*
    var f3 = 0
    profile(20,"fibbonacci recursive") <|
        f3 = fibR(31)
    var f4 = 0
    profile(20,"fibbonacci recursive - jit") <|
        f4 = fibR_jit(31)
	assert(f4==1346269)
    */

