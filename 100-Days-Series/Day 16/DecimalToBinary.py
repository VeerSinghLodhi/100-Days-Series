
# Function for Decimal to Binary Conversion
def getDecimalToBinary(decimal):
    binary=0
    place=1
    while decimal!=0:
        remainder=decimal%2 # Get the last binary digit
        binary+=remainder*place # Add it to the binary result
        place*=10  # Move to the next place value
        decimal//=2 # Floor Divide
    return binary

# Let's Start here
decimal=int(input("Enter decimal number : "))
binary=getDecimalToBinary(decimal)
print("Binary Equivalent is : ",binary)