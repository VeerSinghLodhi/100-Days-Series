
# Recursion method to find GCD
def getGCD(num1,num2):
    if num2==0:
        return num1
    return getGCD(num2,num1%num2)

# method to find LCM using recursion GCD.
def getLCM(num1,num2):
    return (num1*num2)/getGCD(num1,num2)

# Let's Start here
num1=int(input("Enter 1 number : "))
num2=int(input("Enter 2 number : "))
lcm=getLCM(num1,num2)
print("LCM of ",num1," and ",num2," is : ",lcm)