def avg(a,b,c = 5): #c is not overriden by 5
    avg = (a+b+c)/3
    return avg

a = int(input("a : "))
b = int(input("b : "))
c = int(input("c : "))
ans = avg(a,b,c)
print(ans)