# Function to print Hourglass Pattern
def get_print_hourglass(n):
    # Upper Part
    for i in range(n,0,-1):
        for space in range(0,n-i,1):
            print(end=" ")
        for j in range(0,(2*i-1),1):
            print(end="*")
        print()

    # Lower Part
    for i in range(2,n+1,1):
        for space in range(0,n-i,1):
            print(end=" ")
        for j in range(0,(2*i-1),1):
            print(end="*")
        print()

# Let's Start Here
rows=int(input("Enter the number of rows : "))
get_print_hourglass(rows)