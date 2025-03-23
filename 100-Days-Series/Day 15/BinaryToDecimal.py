
# Function for Binary to Decimal Conversion
def getBinaryToDecimal(binary):
    decimal=0
    base=1
    while binary!=0:
        remainder=binary%10     # Extract the last digit
        decimal+=remainder*base # Multiply with the current base
        base*=2                 # Update the base (2*i)
        binary//=10             # Floor division for remove the last digit
    return decimal

# Let's start here
binary = int(input("Enter binary number : "))
decimal = getBinaryToDecimal(binary)
print("The Decimal Equivalent is : ",decimal)