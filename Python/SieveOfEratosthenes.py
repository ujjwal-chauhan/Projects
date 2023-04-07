import numpy

count =int (input("Enter how many primes you want : ",))

list = numpy.arange(2, count, 2) 

for i in list :
    while count > 0 :
        isPrime = True
        for j in list :
            while j < i:
                if i % j == 0 :
                 isPrime = False
                 j += j
                break
        
    if (isPrime) :
        --count
        print(i,"\n")