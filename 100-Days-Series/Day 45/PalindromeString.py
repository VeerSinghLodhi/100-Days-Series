
# Function to check if string is palindrome or not
def getCheckPlindrome(str):
    temp=""
    for i in range(len(str)-1,-1,-1):
        temp+=str[i]
    return temp==str

# Let's Start here
str=input('Enter a string : ')
if getCheckPlindrome(str):
    print("String is a Palindrome")
else:
    print("String is not a Palindrome")