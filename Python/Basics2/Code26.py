l = [1,2,3,4,5,6,7,8,9,10]

ev = []
od = []

for i in l:
    if(i % 2 == 0):
        ev.append(i)
    else:
        od.append(i)

even = tuple(ev)
odd = tuple(od)

print(even)
print(odd)