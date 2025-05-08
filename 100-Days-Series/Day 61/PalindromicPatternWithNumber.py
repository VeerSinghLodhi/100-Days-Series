# Function to print Palindromic Pattern with number
def getPrintPalindromic(rows):
    for i in range(1,rows+1,1):
        # Print Spaces
        for j in range(0,rows-i,1):
            print(end="  ")
        # Print Increasing numbers
        for j in range(1,i+1,1):
            print(j,end=" ")
        # Print Decreasing numbers
        for j in range(i-1,0,-1):
            print(j,end=" ")
        print()

# Let's Start Here
rows=int(input("Enter the number of rows : "))
getPrintPalindromic(rows)
