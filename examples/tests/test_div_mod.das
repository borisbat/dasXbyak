options rtti
require jit/jit_x86_64

include test_common.inc

[jit_x86_64]
def mod_jit ( a, b: int )
    return a % b

[jit_x86_64]
def div_jit ( a, b: int )
    return a / b

[export]
def main()
    test_jit_levels <|
        // now, the tests
        for i in range(1,5)
            print("div_jit(30,{i})={div_jit(30,i)}\n")
            print("mod_jit(30,{i})={mod_jit(30,i)}\n")
            verify(div_jit(30,i)==(30/i))
            verify(mod_jit(30,i)==(30%i))
        var div0 = false
        try
            print("trying div_jit(30,0)\n")
            print("div_jit(30,0)={div_jit(30,0)}\n")
        recover
            div0 = true
        print("div0 = {div0}\n")
        assert(div0,"expecting division by zero")