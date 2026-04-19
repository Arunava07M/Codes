def prime(n):
    d = 0
    if(n <= 1):
        print ("the number is not a prime number")
        return
    for i in range(2,n):
        if(n % i == 0):
            d += 1

    if(d == 0):
        print("the number is a prime number")
    else:
        print("the number is not a prime number")

n = int(input("n = "))
prime(n)