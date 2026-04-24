#palindrome
def palindrome(d):
    start = 0
    end = len(d) - 1
    while(start <= end):
        if(d[start] == d[end]):
            end =- 1
            start += 1
        else:
            print("not a palindrome")
            return
    print("it is a palindrome")


d = "malayalam"
palindrome(d)