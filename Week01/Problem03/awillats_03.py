#What is the largest prime factor of the number 600851475143 ?

import math

#prod = 13195;
prod = 600851475143;

rem = prod;


isPrimeFlag = 0

#if the return is 1, it's prime, otherwise return the factor you found

#initially checked from 1 to num. Could stop at sqrt(num2check)?

def isPrime(num2check):
    i=2

    while (i < math.sqrt(num2check)):
        # for free whatever comes out of this has to be prime, since we search starting from 2.
        # Non prime-factors have to be larger than their prime factors!
        if (num2check % i ==0):
            return i
        else:
            i+=1

    #if we got here without returning then it's prime
    return 1
#enddef


# test cases for isPrime
#print isPrime(7)
#print isPrime(15)
#print isPrime(prod)


while isPrimeFlag==0:
    prime_factor = isPrime(rem)

    if prime_factor==1:
        isPrimeFlag = 1
        print("done: {:1.0f}".format(rem))
    else:
        print("remainder is {:1.0f} * {:1.0f}".format(rem,prime_factor))
        rem = rem/prime_factor




