


# Function to remove spaces from a string
def getRemoveSpaces(str):
    temp=""
    for i in range(0,len(str),1):
        if str[i]!=' ':
            temp+=str[i]
    return temp

# Let's Start here
str=input("Enter a string : ")
print("String with spaces : ",str)
print("String withour spaces : ",getRemoveSpaces(str))