# Count Digits in a Number
# Function for count digits
def getCountDigits(num):
    count=0
    #Handle negative numbers
    if num<0:
        num=-num
    # Count Digits
    while num!=0:
        count+=1
        num//=10
    return count
# Let's Start here
# Input a number
num=int(input('Enter an Integer: '))
# Call the Arrow function and display the result
digits=getCountDigits(num)
print("The number of digits in ",num," is : ",digits)