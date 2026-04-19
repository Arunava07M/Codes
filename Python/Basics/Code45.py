def outanout():
    while(True):
        n = (input("n = "))
        if(n == "quit"):
            break
        f = int(n)
        if(f > 0):
            print("positive")             
        elif(f == 0):
            print("it is 0")
        else:
            print("negative")

outanout()