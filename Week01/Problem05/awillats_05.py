#2520 is the smallest number that can be divided
# by each of the numbers from 1 to 10 without any remainder.
#What is the smallest positive number
# that is evenly divisible by all of the numbers from 1 to 20?



#reuse my code from problem 3 for checking for primes
import sys
sys.path.append('../Problem03')
#from awillats_03 import isPrime
import awillats_03


#may want to functionalize the decomposition in problem 3 also...

max_factor = 10

prod =1
for i in range(1,max_factor+1):
    prod = prod*i
    #awillats_03.main(100)
print(prod)