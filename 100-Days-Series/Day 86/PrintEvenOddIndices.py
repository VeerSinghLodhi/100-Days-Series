
# Function to print Even Indices
def get_print_even_indices(arr):
    for i in range(0,len(arr)):
        if i%2==0:
            print(arr[i],end=" ")

# Function to print Odd Indices
def get_print_odd_indices(arr):
    for i in range(0,len(arr)):
        if i%2!=0:
            print(arr[i],end=" ")

# Let's Start Here
arr=[1,2,3,4,5,6,7,8,9,10]
print('Even Indices Printing..')
get_print_even_indices(arr)
print('\nOdd Indices Printing..')
get_print_odd_indices(arr)

