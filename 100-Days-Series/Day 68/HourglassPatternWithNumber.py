# Function to print Hourglass Pattern with numbers
def get_print_pattern(n):
    for i in range(n, 0, -1):
        for j in range(n - i):
            print("  ", end="")
        for j in range(1, 2 * i):
            print(j, end=" ")
        print()
    for i in range(2, n + 1):
        for j in range(n - i):
            print("  ", end="")
        for j in range(1, 2 * i):
            print(j, end=" ")
        print()


# Let's Start Here
n = int(input("Enter the number of rows: "))
get_print_pattern(n)