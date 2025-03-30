
# Recusion Method to calculate power of a number
def getPower(base,exp):
    if  exp==0:
        return 1 # Base case: anything to the power of 0 is 1.
    return base*getPower(base,exp-1) # Recursive step

# Recurtion  Method to calculate the sum of digits raised to the power
def getArmStrong(num,power):
    if num==0:
        return 0 # Base Case
    digit=num%10 # Get the last Digit.
    return getPower(digit,power)+getArmStrong(num//10,power)# Recursive Power

# Recurtion Method to check if number is an ArmStrong number.
def getIsArmStrong(num):
    temp=num
    countDigit=0
    while temp!=0: # Calculate the number digits
        countDigit+=1
        temp//=10 # Floor Division
    sum=getArmStrong(num,countDigit)# Calculate sum of digits raised to the power
    return sum==num  # Check if it matches the original number

# Let's Start here
num=int(input("Enter a number to check if it is an ArmStrong number : "))
# Check and display result
result=getIsArmStrong(num)
if result:
    print(num," is an ArmStrong number!")
else: 
    print(num," is not Arm Strong number!")

