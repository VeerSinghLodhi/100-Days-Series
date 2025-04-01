
# Function for check if number is perfect number or not.
def getIsPerfectNumber(num):
    if num<=1:
        return False
    sum1=0
    for i in range(1,(num+2)//2,1):
        if num%i==0:
            sum1+=i
    return sum1==num

# Let's Start here
num=28
# Call the function and display result.
if getIsPerfectNumber(num):
    print(num," is a perfect number!")
else:
    print(num," is not a perfect number!")