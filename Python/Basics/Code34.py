#print vowel count of a given string

n = "artificial Intelligence"

count = 0

for ch in n:
    if(ch == "a" or ch == "e" or ch == "i" or ch == "o" or ch == "u" or ch == "A" or
       ch == "E" or ch == "I" or ch == "O" or ch == "U"):
        count += 1

print(count)

'''n = "artificial Intelligence"
count = 0

# The membership test 'in' makes this much shorter
for ch in n:
    if ch.lower() in "aeiou":
        count += 1

print(count)  # Output: 10'''