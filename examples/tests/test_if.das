options rtti
require jit/jit_x86_64

var last_value = 0

def printreg(t:int)
    last_value = t
    print("value {t}\n")

[jit_x86_64]
def test_ite(a:int)
    if a==13
        printreg(13)
    else
        printreg(a+100000)

[jit_x86_64]
def test_it(a:int)
    if a==13
        printreg(13)

[export]
def main()
    print("it\n")
    last_value=0;   test_it(13);    assert(last_value==13)
    last_value=0;   test_it(1);     assert(last_value==0)
    print("ite\n")
    last_value=0;   test_ite(13);   assert(last_value==13)
    last_value=0;   test_ite(1);    assert(last_value==100001)

