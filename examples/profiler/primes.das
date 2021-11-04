// options log=true, print_var_access=true, print_ref=true

require testProfile

options rtti
require jit/jit_x86_64

[jit_x86_64]
def isprime_jit(n:int)
    for i in range(2, n)
        if (n % i == 0)
            return false
    return true

[jit_x86_64]
def primes_jit(n:int)
    var count = 0
    for i in range(2, n+1)
        if isprime_jit(i)
            ++count
    return count

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
def primesI(n:int)
    var count = 0
    for i in range(2, n+1)
		count ++
		for j in range(2,i)
			if i % j == 0
				count --
				break
    return count

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

[export]
def main()
    /*
    print("primesI    (10) = {primesI(10)}\n")
    print("primes     (10) = {primes(10)}\n")
    print("primes_jit (10) = {primes_jit(10)}\n")
    print("primesI_jit(10) = {primesI_jit(10)}\n")
    */
    var f1 = 0
    profile(20,"primes loop") <|
        f1 = primes(14000)
	assert(f1==1652)
    var f1j = 0
    profile(20,"primes loop - jit") <|
        f1j = primes_jit(14000)
	assert(f1==1652)
	var f2 = 0
    profile(20,"primes loop, inline") <|
        f2 = primesI(14000)
	assert(f2==1652)
	var f2j = 0
    profile(20,"primes loop, inline - jit") <|
        f2j = primesI_jit(14000)
	assert(f2j==1652)
	var f3 = 0
    profile(20,"primes loop C++") <|
        f3 = testProfile::testPrimes(14000)
	assert(f3==1652)
