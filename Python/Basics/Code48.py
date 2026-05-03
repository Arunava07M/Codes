def factorial(n):
    d = 1
    while(n > 0):
        d = d * n
        n -= 1
    print(d)

factorial(5)