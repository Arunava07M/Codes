#Average

def average(s):
    n = len(s)
    d = 0
    for i in s:
        d = d + i
    e = d / n
    print(e)

s = [1,2,3,4,5]
average(s)