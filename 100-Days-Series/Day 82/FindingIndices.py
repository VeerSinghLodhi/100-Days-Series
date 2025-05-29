
# Function to find all occurrences of a key in the array
def get_find_occurrence(arr,key,index):
    s=len(arr)
    # Base case: if the current index reaches the size of the array, stop recursion
    if s==index:
        return
    # If the current element matches the key, print its index
    if arr[index]==key:
        print(index,end=" ")

    index+=1
    # Recursive call to check the next element
    get_find_occurrence(arr,key,index)

# Let's Start Here
arr=[3, 2, 4, 5, 6, 2, 7, 2, 2]
key=2
get_find_occurrence(arr,key,0)