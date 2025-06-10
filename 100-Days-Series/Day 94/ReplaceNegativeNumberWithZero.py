
# Function to replace negative numbers with zero
def get_replace_negative_with_zero(arr):
    for i in range(0, len(arr)):
        if arr[i] < 0 :
            arr[i] = 0


# Let's Start Here
arr=[-1, 2, -3, 4, -5]
print('Original Array')
print(arr)
get_replace_negative_with_zero(arr)
print('Updated Array')
print(arr)