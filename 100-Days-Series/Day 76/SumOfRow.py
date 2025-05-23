
# Python program to calculate the sum of elements in a specific row
nums = [
    [1, 4, 9],
    [11, 4, 3],
    [2, 2, 3]
]

target_row = 1  # Index of the row to sum (second row)
sum_of_row = 0

# Loop through the elements of the target row
for num in nums[target_row]:
    sum_of_row += num

# Print the result
print("The sum of the numbers in row", target_row + 1, "is:", sum_of_row)
