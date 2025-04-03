
# Recursion method to find sum of first n natural numbers.
def getSum(num):
    if num==1:
        return 1
    return num + getSum(num-1)
 
 
#Let's Start here
num=int(input("Enter a number : "))
# Call the function and display result
print("Sum of first ",num," natural number : ",getSum(num))
