
# Function to print the multiplication table for a given number.
def get_print_table(number):
    print("Multiplication table for",number," :")
    for i in range(1,11,1):
        print(number," x ",i," = ",(number*i))


# Let's Start here
# Prompt the user to enter a number
number=int(input('Enter a number to print its multiplication table : '))
# Call the function to print its multiplication table
get_print_table(number)