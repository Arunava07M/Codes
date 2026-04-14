#take a decimal number as input(like 45.78) and output its : 
# •integerpart = 45 
# •fractionalpart = .78

a = float(input("a :"))
b = int(a)

print("integer part = ", b)
print("fractional part = ", round(a - b, 2)) #round function and the 2 controls the output
