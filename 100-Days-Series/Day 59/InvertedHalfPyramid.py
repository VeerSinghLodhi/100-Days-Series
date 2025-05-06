
# Function to print Inverted Half Pyramid
def get_print_pyramid(rows):
    for i in range(rows,0,-1):
        for j in range(1,i+1,1):
            print(j,end=" ")
        print()

# Let's Start Here
rows=int(input("Enter the number of rows : "))
get_print_pyramid(rows)