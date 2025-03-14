#Function 1
def getCountDigit(num):
    count=0
    while num!=0:
        count+=1
        num//=10
    return count
# Function 2
def getPower(num,power):
    res=1
    while power>0:
        res*=num
        power-=1
    return res
# Function 3
def getIsArmStrongNumber(num):
    temp=num
    sum=0
    power=getCountDigit(num)
    while num!=0:
        sum+=getPower(num,power)
        num//=10
    return temp==sum
# Start Here
num=int(input("Enter a number : "))
ans=getIsArmStrongNumber(num)
if ans:
    print(num," is a Arm Strong Number")
else:
    print(num," is not a Arm Strong Number")
    