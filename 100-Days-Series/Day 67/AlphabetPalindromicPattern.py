# Function to print Palindromic Pattern with Alphabet
def getPrintPalindromic(rows):
    for i in range(1,rows+1,1):
        ch=65
        # Print Spaces
        for j in range(0,rows-i,1):
            print(end="  ")
        # Print Increasing Alphabet
        for j in range(1,i+1,1):
            print(chr(ch),end=" ")
            ch+=1
        for j in range(i-1,0,-1):
            print(chr(ch),end=" ")
            ch+=1
        print()

# Let's Start Here
rows=int(input("Enter the number of rows : "))
getPrintPalindromic(rows)
