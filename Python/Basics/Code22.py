color = input("enter your color: ")

match color:
    case "green":
        print("go")
    case "red":
        print("stop")
    case "yellow":
        print("look")
    case _: #default case
        print("wrong color")