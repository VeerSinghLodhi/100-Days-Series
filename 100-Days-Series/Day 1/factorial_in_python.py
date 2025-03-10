
def getFactorial(num):
    if num<0:
        return -1
    if num==0:
        return 1
    else:
        fact=1
        for i in range (1,num+1,1):
            fact=fact*i
        return fact

num=int(input("Enter a number : "))
num=getFactorial(num)
if num==-1:
    print("Factorial of a negative number is not defined.")
else:
    print("Factorial is ",num)