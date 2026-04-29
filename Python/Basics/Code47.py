#prime number rang 
def prime(b):
    if(b <= 1):
        return False
    if(b == 2):
        return True
    for j in range(2, b):
        if(b % j == 0):
            return False
        
    return True

def primeRange(a):
    for i in range(1, a + 1):
        if(prime(i)):
            print(i, end=" ")
    print()


a = int(input("a = "))
primeRange(a)