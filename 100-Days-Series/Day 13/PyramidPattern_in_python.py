# Fucntion for print pyramid pattern
def getPrintPyramidPattern(rows):
    for i in range(1,rows+1,1):
        # Print Spaces
        for j in range(0,rows-i,1):
            print("  ",end="")
        # Print Stars
        for k in range(0,2*i-1,1):
            print("*",end="")
        # Move to the next line
        print()

# Let's Start here
rows=int(input("Enter the number of rows for print pyramid pattern : "))
# Call the function for print pyramid pattern
getPrintPyramidPattern(rows)