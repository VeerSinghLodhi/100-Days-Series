
# Function to pritn Diamand Pattern With Numbers.
def get_print_pattern(rows):
    # Upper Part
    for i in range(1,rows+1):
        for space in range(0,rows-i):
            print(end=" ")

        for j in range(0,(2*i-1)):
            print(i,end="")
        print()

    # Lower Part
    for i in range(rows-1,0,-1):
        for space in range(0,rows-i):
            print(end=" ")

        for j in range(0,(2*i-1)):
            print(i,end="")
        print()


# Let's Start Here
rows=int(input("Enter the number of rows : "))
get_print_pattern(rows)