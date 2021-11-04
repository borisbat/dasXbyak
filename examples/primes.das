// options log=true, print_var_access=true, print_ref=true

require testProfile

options rtti

require jit_x86_64

/*

def isprime(n)
    for i in range(2, n)
        if (n % i == 0)
            return false
    return true

[sideeffects]
def primes(n)
    var count = 0
    for i in range(2, n+1)
        if isprime(i)
            ++count
    return count

[sideeffects]
def primesI(n)
    var count = 0
    for i in range(2, n+1)
		count ++
		for j in range(2,i)
			if i % j == 0
				count --
				break
    return count

*/

[jit_x86_64]
def primesI_jit(n:int)
    var count = 0
    for i in range(2, n+1)
		count ++
		for j in range(2,i)
			if i % j == 0
				count --
				break
    return count

[jit_x86_64]
def mod_jit ( a, b: int )
    return a % b

[jit_x86_64]
def div_jit ( a, b: int )
    return a / b

[export]
def main()

    print("mod_jit(30,0) = {mod_jit(30,0)}\n")

    return

    for i in range(-10,10)
        print("i = {i}\n")
        print("mod_jit(30,{i}) = {mod_jit(30,i)}\n")
        print("div_jit(30,{i}) = {div_jit(30,i)}\n")


    // print("primesI_jit(14000) = {primesI_jit(14000)}\n")
    return

/*
	var f2j = 0
    profile(20,"primes loop, inline - jit") <|
        f2j = primesI_jit(14000)
	assert(f2j==1652)

    return

	var f1 = 0
    profile(20,"primes loop") <|
        f1 = primes(14000)
	assert(f1==1652)
	var f2 = 0
    profile(20,"primes loop, inline") <|
        f2 = primesI(14000)
	assert(f2==1652)
	var f3 = 0
    profile(20,"primes loop C++") <|
        f3 = testProfile::testPrimes(14000)
	assert(f3==1652)

*/
