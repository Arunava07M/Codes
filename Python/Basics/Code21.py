a = "admin"
b = "pass"

username = input("enter username: ")
password = input("enter password: ")

if(a == username and b == password):
    print("login successful")
else:
    if(a != username):
        print("wrong username entered which is",username)
    elif(b != password):
        print("wrong password entered which is",password)
    else:
        print("both username and password are wrong")