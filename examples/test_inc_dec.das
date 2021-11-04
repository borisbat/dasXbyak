options rtti
require jit_x86_64

[jit_x86_64]
def inc_jit ( a : int )
    var b = a
    ++ b
    return b

[jit_x86_64]
def dec_jit ( a : int )
    var b = a
    -- b
    return b

[jit_x86_64]
def post_inc_jit ( a : int )
    var b = a
    b ++
    return b

[jit_x86_64]
def post_dec_jit ( a : int )
    var b = a
    b --
    return b

[jit_x86_64]
def r_inc_jit ( a : int )
    var b = a
    return ++b

[jit_x86_64]
def r_dec_jit ( a : int )
    var b = a
    return --b

[jit_x86_64]
def r_post_inc_jit ( a : int )
    var b = a
    return b++

[jit_x86_64]
def r_post_dec_jit ( a : int )
    var b = a
    return b--

[export]
def main()
    print("inc(10) = {inc_jit(10)}\n"); verify(inc_jit(10)==11)
    print("dec(10) = {dec_jit(10)}\n"); verify(dec_jit(10)==9)
    print("post_inc(10) = {post_inc_jit(10)}\n"); verify(post_inc_jit(10)==11)
    print("post_dec(10) = {post_dec_jit(10)}\n"); verify(post_dec_jit(10)==9)
    print("r_inc(10) = {r_inc_jit(10)}\n"); verify(r_inc_jit(10)==11)
    print("r_dec(10) = {r_dec_jit(10)}\n"); verify(r_dec_jit(10)==9)
    print("r_post_inc(10) = {r_post_inc_jit(10)}\n"); verify(r_post_inc_jit(10)==10)
    print("r_post_dec(10) = {r_post_dec_jit(10)}\n"); verify(r_post_dec_jit(10)==10)
