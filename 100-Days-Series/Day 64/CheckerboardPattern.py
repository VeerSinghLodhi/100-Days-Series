
# Function to print Checkerboard Pattern
def get_print_chekerboard(n):
    for i in range(1,n+1,1):
        for j in range(1,n+1,1):
            if (i+j)%2==0:
                print(end="* ")
            else:
                print(end="  ")
        print()


# Let's Start Here
n=int(input("Enter the size of Chekerboard : "))
get_print_chekerboard(n)