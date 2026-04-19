'''Write a function that takes two integers a and b prints all even numbers between them(inclusive).'''

def even(a,b):
    for i in range(a,b+1):
        if(i % 2 == 0):
            print(i)
a = int(input("a : "))
b = int(input("b : "))
even(a,b)
