

def getCheckPalindromeNumber(num):
    n=num
    reversed=0
    while num!=0:
        reversed=(reversed*10)+num%10
        num//=10
    return n==reversed

num=int(input("Enter a number : "))
ans=getCheckPalindromeNumber(num)
if ans:
    print(num," is a Palindrome Number")
else:
    print(num," is not a Palindrome Number")