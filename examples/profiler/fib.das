// options log=true, print_var_access=true, print_ref=true

require testProfile

require jit_x86_64

/*
00007FF7BC76A710  push        rdi
00007FF7BC76A712  sub         rsp,20h
00007FF7BC76A716  mov         edi,ecx
    if (n < 2) {
00007FF7BC76A718  cmp         ecx,2
00007FF7BC76A71B  jge         testFibR+15h (07FF7BC76A725h)
        return n;
00007FF7BC76A71D  mov         eax,ecx
    }
}
00007FF7BC76A71F  add         rsp,20h
00007FF7BC76A723  pop         rdi
00007FF7BC76A724  ret
    }
    else {
        return testFibR(n - 1) + testFibR(n - 2);
00007FF7BC76A725  add         ecx,0FFFFFFFEh
00007FF7BC76A728  mov         qword ptr [rsp+30h],rbx
00007FF7BC76A72D  call        testFibR (07FF7BBBF466Dh)
00007FF7BC76A732  lea         ecx,[rdi-1]
00007FF7BC76A735  mov         ebx,eax
00007FF7BC76A737  call        testFibR (07FF7BBBF466Dh)
00007FF7BC76A73C  add         eax,ebx
00007FF7BC76A73E  mov         rbx,qword ptr [rsp+30h]
    }
}
00007FF7BC76A743  add         rsp,20h
00007FF7BC76A747  pop         rdi
00007FF7BC76A748  ret
*/


[sideeffects]
def fibR(n:int)
    if (n < 2)
        return n
    return fibR(n - 1) + fibR(n - 2)

[jit_x86_64]
def fibR_jit(n:int)
    if (n < 2)
        return n
    return fibR_jit(n - 1) + fibR_jit(n - 2)

[sideeffects]
def fibI(n:int)
    var last = 0
    var cur = 1
    for i in range( n-1)
        let tmp = cur
        cur += last
        last = tmp
    return cur

[jit_x86_64]
def fibI_jit(n:int)
    var last = 0
    var cur = 1
    for i in range(n-1)
        let tmp = cur
        cur += last
        last = tmp
    return cur

[export]
def main()
	var f1 = 0
    profile(20,"fibbonacci loop") <|
        f1 = fibI(6511134)
	assert(f1==1781508648)
	var f1_j = 0
    profile(20,"fibbonacci loop - jit") <|
        f1_j = fibI_jit(6511134)
	assert(f1_j==1781508648)
	var f4 = 0
    profile(20,"fibbonacci loop c++") <|
        f4 = testProfile::testFibI(6511134)
	assert(f4==1781508648)
	var f3 = 0
    profile(20,"fibbonacci recursive") <|
        f3 = fibR(31)
	assert(f3==1346269)
	var f3_j = 0
    profile(20,"fibbonacci recursive - jit") <|
        f3_j = fibR_jit(31)
	assert(f3_j==1346269)
	var f5 = 0
    profile(20,"fibbonacci recursive c++") <|
        f5 = testProfile::testFibR(31)
	assert(f5==1346269)

