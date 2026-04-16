a = "admin"
b = "pass"

username = input("enter username: ")
password = input("enter password: ")

if(a == username and b == password):
    print("login successful")
elif(a != username):
    print("wrong username entered which is",username)
else:
    print("wrong password entered which is",password)

