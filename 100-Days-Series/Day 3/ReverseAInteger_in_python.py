
def getReverseInteger(num):
    reversed=0
    while num!=0:
        reversed=(reversed*10)+num%10
        num//=10
    return reversed

num=int(input("Enter a number : "))
num=getReverseInteger(num)