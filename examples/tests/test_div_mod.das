
options rtti
require jit/jit_x86_64
require jit/jit_x86_64_test

[jit_x86_64]
def mod_jit ( a, b: int )
    return a % b

[jit_x86_64]
def div_jit ( a, b: int )
    return a / b

[test]
def div_and_mod(t: T?)
    test_jit_levels(t.verbose) <|
        for i in range(-100,100)
            for j in range(-100,100)
                if j != 0
                    if !equal(t, div_jit(i,j), i/j)
                        t->log("when div {i} {j}")
                    if !equal(t, mod_jit(i,j), i%j)
                        t->log("when mod {i} {j}")
        var div0 = false
        try
            if div_jit(30,0)==0
                t->error("no exception, expecting div by zero")
        recover
            div0 = true
        assert(div0,"expecting division by zero")

[export]
def main
    let t = div_jit(30,7)
    print("t = {t}\n")