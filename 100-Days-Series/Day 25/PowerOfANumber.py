
# Function for calculate power of a number
def getPowerOfANumber(base,exp):# base^exponent
    if exp==0:
        return 1
    res=1
    while exp!=0:
        res*=base
        exp-=1
    return res

# Recursion function for calculate power of number.
def getPower(base,exp):
    if exp==0:
        return 1
    return base*getPower(base,exp-1)

# Let's Start here
num=int(input("Enter a number"))
power=int(input("Enter power "))
res1=getPowerOfANumber(num,power)# function 1
res2=getPower(num,power)# function 2
print("Normal function result is ",res1)
print("Recursion function result is ",res2)