# Least Comman Multiple(LCM)
# Function to calculate GCD using the Euclidean algorithm
def getGCD(num1,num2):
    while num2!=0:
        remainder=num1%num2
        num1=num2
        num2=remainder
    return num1
# Function for calculate LCM
def getLCM(num1,num2):
    gcd=getGCD(num1,num2)
    return num1*num2/gcd
# Let's Start here
num1=int(input("Enter 1st number : "))
num2=int(input("Enter 2nd number : "))
# Ensure the numbers are positive
if num1<0:
    num1=-num1
if num2<0:
    num2=-num2
# Calculate LCM
lcm=getLCM(num1,num2)
print("LCM of ",num1," and ",num2," is : ",lcm)