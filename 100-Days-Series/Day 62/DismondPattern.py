
# Functiont to print Diamond Pattern
def get_print_diamond(n):
    # Print the upper half of the diamond
    for i in range(1,n+1,1):
        # Print Spaces
        for j in range(0,n-i,1):
            print(end=" ")
        # Print starts
        for j in range(0,(2*i-1),1):
            print(end="*")
        print()
    
    # Print the lower half of the diamond
    for i in range(n-1,0,-1):
        # Print Spaces
        for j in range(0,n-i,1):
            print(end=" ")
        # Print starts
        for j in range(0,(2*i-1),1):
            print(end="*")
        print()

# Let's Start Here
rows=int(input("Enter the number of rows : "))
get_print_diamond(rows)