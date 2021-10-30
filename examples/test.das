require xbyak

def test_add(x,y:int)
    var pgen = new CodeGenerator
    var gen & = *pgen
    if xbyak32
        gen |> mov ( gen.eax, gen.ptr [ gen.esp + 4 ] )
        gen |> add ( gen.eax, y )
    elif xbyak64win
        gen |> lea ( gen.rax, gen.ptr [ gen.rcx + y ] )
    else
        gen |> lea ( gen.eax, gen.ptr [ gen.edi + y ] )
    gen |> ret
    let result = gen |> eval_i(x)
    unsafe
        delete pgen
    return result

[export]
def main
    let t = test_add(2,3)
    print("t = {t}\n")