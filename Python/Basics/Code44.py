def count(n):
    d = 0
    while(n > 0):
        d = d + (n % 10)
        n = n // 10

    print(d)

n = int(input("d : "))
count(n)