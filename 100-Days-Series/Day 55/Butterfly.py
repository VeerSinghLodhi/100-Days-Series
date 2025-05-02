def print_butterfly(n):
    # Upper part of the butterfly
    for i in range(1, n + 1):
        print("*" * i, end="")  # Left stars
        print(" " * (2 * (n - i)), end="")  # Spaces
        print("*" * i)  # Right stars

    # Lower part of the butterfly
    for i in range(n, 0, -1):
        print("*" * i, end="")  # Left stars
        print(" " * (2 * (n - i)), end="")  # Spaces
        print("*" * i)  # Right stars


row = int(input("Enter the number of rows for the butterfly: "))
print_butterfly(row)
