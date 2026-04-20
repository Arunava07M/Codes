#linear search
l = [1,2,3,4,10,5,6]

d = 0
for i in l:
    if(i == 10):
        print(f"x found at {d}")
        break
    d += 1
