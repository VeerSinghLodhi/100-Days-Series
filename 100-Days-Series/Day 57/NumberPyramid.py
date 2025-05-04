
# Function to print Pyramid
def getPrintNumberPyramid(n):
    for i in range(1,n+1,1):
        #Print spaces
        for j in range(i,n,1):
            print(" ",end="")
        #Print Ascending numbers
        for j in range(1,i+1,1):
            print(j,end="")
        #Print Descending numbers
        for j in range(i-1,0,-1):
            print(j,end="")
        print()

# Let's Start here
rows=int(input("Enter the number of rows : "))
getPrintNumberPyramid(rows)