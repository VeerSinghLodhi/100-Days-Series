
def getCheckPrimeNumber(num):
    ans=True
    if num==1 or num==0:
        ans=False
    else:
        for i in range (2,num,1):
            if num%i==0:
                ans=False
                break
    return ans

num=int(input("Enter a number :"))
ans=getCheckPrimeNumber(num)
if ans:
    print(num," is a Prime Number")
else:
    print(num," is not a Prime Number")