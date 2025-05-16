
def get_missing_number(arr, size):
    n = size + 1  # Actual range (1 to n)
    total_sum = n * (n + 1) // 2  # Sum of 1 to n (integer division)
    array_sum = 0

    for num in arr:
        array_sum += num

    return total_sum - array_sum


# Let's Start Here
arr = [1, 2, 4, 5, 6]  # Example
size = len(arr)  # Number of elements in the array
missing_number = get_missing_number(arr, size)
print("Missing number is:", missing_number)
