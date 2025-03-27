# Function to remove duplicate elements from an array
def remove_duplicates(arr):
    size = len(arr)
    temp = [0] * size  # Temporary array to store unique elements
    index = 0

    for i in range(size):
        # Check if the current element exists in the temporary array
        is_duplicate = False
        for j in range(index):
            if arr[i] == temp[j]:
                is_duplicate = True
                break
        # If not a duplicate, add it to the temporary array
        if not is_duplicate:
            temp[index] = arr[i]
            index += 1

    # Return the array up to the 'index' (unique elements only)
    return temp[:index]

# Main functionality
if __name__ == "__main__":
    print("Enter the number of elements in the array: ", end="")
    size = int(input())  # Input size of the array
    arr = []  # Initialize an empty array

    print("Enter the elements of the array: ")
    for _ in range(size):
        arr.append(int(input()))  # Input each element

    # Call the function to remove duplicates
    result = remove_duplicates(arr)

    # Print the array after removing duplicates
    print("Array after removing duplicate elements:")
    for num in result:
        print(num, end=" ")
