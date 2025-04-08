#Function For ToggleCase
def getToggleCase(str):
    result=""
    for i in range (0,len(str),1):
        ch=str[i]
        if ch.isupper():
            result+=ch.lower()
        elif ch.islower():
            result+=ch.upper()
        else:
            result+=ch
    return result
#Let's Start here
str="Hello, World!"
print("Original String : ",str)
toggledString=getToggleCase(str)
print("Toggled String : ",toggledString)
