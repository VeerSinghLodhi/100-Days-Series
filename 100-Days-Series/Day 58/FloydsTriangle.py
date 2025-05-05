
# Function to print Floyd's Triangle
def getPrint_floyds_triangle(rows):
    num=1
    for i in range(0,rows):
        for j in range(0,i+1):
            print(num,end=" ")
            num+=1
        print()

# Let' Start here
rows=int(input('Enter the number of rows : '))
getPrint_floyds_triangle(rows)