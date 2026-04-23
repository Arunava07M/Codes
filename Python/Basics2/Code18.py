# Dictionary

info = {
    "name":"arunava",
    "subject":["math","science"],
    "score":[97,98],
    "cgpa": 9.7,
    3.14: "PI"
}
dict_keys = info.keys()
print(dict_keys)

dict_keys1 = list(info.keys())
print(dict_keys1)

print(type(info))
print(info["name"])
print(info.keys())
print(info.values())
print(info.items())
print(info.get("name"))
info.update({
    "city":"kolkata"
})
print(info)