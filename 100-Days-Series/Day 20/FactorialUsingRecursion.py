
 # Method to calculate factorial using recursion.
def factorial(num):
    if num==0 or num==1:
        return 1 #Base case: factorial of 0 or 1 is 1
    return num*factorial(num-1)

# Let's Start here
num=int(input("Enter a numnber : "))
fact=factorial(num)
print("Factorial of ",num," is : ",fact)