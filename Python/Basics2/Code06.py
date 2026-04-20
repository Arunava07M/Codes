#format function

a = 5
b = 10
sum = a+b
print("sum is {}".format(sum))
print("sum of {} and {} is {}".format(a,b,sum))

print("sum of {1} and {0} is {2}".format(a,b,sum)) #see a = 0, b = 1, sum = 2 ...indexing

print("language is {}".format("python"))

print("values of var {a} and {b}".format(a = 10, b = 5))