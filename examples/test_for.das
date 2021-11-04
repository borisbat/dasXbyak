options rtti
require jit_x86_64

var last_value = 0

def printreg(t:int)
    last_value = t
    print("value {t}\n")

[jit_x86_64]
def test_range(a,b:int)
    for t in range(a,b)
        printreg(t)

[export]
def main()
    print("test_range(0,5)\n")
    test_range(0,5)
    print("test_range(2,5)\n")
    test_range(2,5)
    print("test_range(5,5)\n")
    test_range(5,5)
    print("test_range(50,5)\n")
    test_range(50,5)
    print("test_range(-2,5)\n")
    test_range(-2,5)
    print("test_range(-2,-3)\n")
    test_range(-2,-3)
