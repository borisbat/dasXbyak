options rtti
require jit/jit_x86_64
require jit/jit_x86_64_test

[jit_x86_64]
def copy_local_to_arg ( var arg:int )
    var res = arg + 1
    arg = res
    return res

[export]
def main
    test_jit_levels(false,true) <|
        let q = copy_local_to_arg(11)
        print("q = {q}\n")
