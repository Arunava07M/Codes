#factorial of n

def fact(n):
    d = 1
    for i in range(1,n+1):
        d = d * i
    return d

n = int(input("n = "))
print(fact(n))