#take a decimal number as input(like 45.78) and output its : 
# •integerpart = 45 
# •fractionalpart = .78

a = float(input("a :"))
b = int(a)
print("integer part = ",int(a))
print("fractional part = ", (a - b))
