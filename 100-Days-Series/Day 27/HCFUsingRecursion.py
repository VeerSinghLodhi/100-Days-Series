
# Recursion function to find HCF
def getHCF(num1,num2):
    if num2==0:
        return num1
    return getHCF(num2,num1%num2)

# Let's Start here
num1=int(input("Enter 1 number : "))
num2=int(input("Enter 2 number : "))
hcf=getHCF(num1,num2)
print("HCF of ",num1," and ",num2," is : ",hcf)