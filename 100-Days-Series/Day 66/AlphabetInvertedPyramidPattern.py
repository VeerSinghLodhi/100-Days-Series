
# Function to print Alphabet Inverted Pyramid Pattern
def get_print_pattern(rows):
    for i in range(rows,0,-1):
        ch=65  # ASCII value of 'A'
        for j in range(1,i+1):
            print(chr(ch),end=" ")  # Convert ASCII to character
            ch+=1
        print()


# Let's Start Here
rows=int(input("Enter the number of rows : "))
get_print_pattern(rows)