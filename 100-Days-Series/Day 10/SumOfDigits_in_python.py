
# Function for calculate the sum of digits
def getSumOfDigits(num):
    sum=0
    while num!=0:
        sum+=num%10
        num//=10
    return sum

# Let's Start here
# Input the number
num=int(input("Enter an Integer : "))
# Call the function and display the result
totalSum=getSumOfDigits(num)
print("Sum of digits is : ",totalSum)

    