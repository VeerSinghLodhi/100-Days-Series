
# Recursive method to calculate Fibonacci numbers
def getFibonacci(num):
    if num<=1:
        return num   # Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    else:
        return getFibonacci(num-1)+getFibonacci(num-2)
    
# Let's Start here
#// Number of terms in the Fibonacci series
num=int(input("Enter series terms : "))
print("Fibonacci series up to ",num,"term")
for i in range(0,num,1):
    print(getFibonacci(i),end=" ")
