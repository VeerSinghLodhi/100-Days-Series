# Let's Start here
# Initialize the array with elements
arr = [4, 3, 5, 2, 6, 1, 7, 8]

# Initialize variables to track the largest and smallest values
# Both are initially set to the first element of the array
largest = arr[0]
smallest = arr[0]

# Loop through each element in the array using its index
for i in range(0, len(arr), 1):  # Loop from index 0 to the end of the array
    # Update largest if the current element is greater
    if largest < arr[i]:
        largest = arr[i]

    # Update smallest if the current element is smaller
    if smallest > arr[i]:
        smallest = arr[i]

# Print the largest and smallest values
print("Largest ", largest, ", Smallest ", smallest)
