info = [
    ("Alice", "Math"),
    ("Bob", "Science"),
    ("Alice", "Science"),
    ("Charlie", "Math"),
    ("Bob", "Math"),
    ("Alice", "English"),
    ("Charlie", "English"),
]
for name,course in info:
    print(name, course)

a = set()

for tup in info:
    a.add(tup[1])

#list all unique courses
print(a)

#list students enrolled in english

for name,course in info:
    if(course == "English"):
        print(name)

#create dictionary (student, set of courses)
dict = {}

for name,course in info:
    if(dict.get(name) == None):
        dict.update({
            name:set()
        })
        dict[name].add(course)
    else:
        dict[name].add(course)

print(dict)


    

