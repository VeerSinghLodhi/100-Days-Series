# Function to calculate GCD using the Euclidean algorithm
# Fucntion for find GCD
def getGCD(num1,num2):
    while num2!=0:
        remainder=num1%num2
        num1=num2
        num2=remainder
    return num1
#Let's Start here
num1=int(input("Enter 1st number : "))
num2=int(input("Enter 2nd number : "))
#Ensure the numbers are positive 
if num1<0:
    num1=-num1
if num2<0:
    num2=-num2
#Calculate GCD
gcd=getGCD(num1,num2)
print("GCD of ",num1," and ",num2," is : ",gcd)