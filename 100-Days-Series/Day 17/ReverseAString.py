
# Function
def getReverseString(string):
    reversed=""
    for i in range (len(string)-1,-1,-1):
        reversed+=string[i]
    return reversed

string=input("Enter a String: ")
reverseString=getReverseString(string)
print("Original String: "+string)
print("Reversed String: "+reverseString)