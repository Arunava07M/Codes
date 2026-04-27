def prime(f):
    if(a <= 1):
        return False
    if(a == 2):
        return True
    for i in range(2,(a-1)):
        if(a % i == 0):
            return False
        
    return True

def primeRange(a):
    for i in range(1,a):
        if(prime(i)):
            print(i," ")


a = int(input("a = "))
primeRange(a)