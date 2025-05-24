
# Function to check if the array has duplicate values.
def get_check(arr):
    size=len(arr)
    # Bubble Sort
    for i in range(0,size):
        for j in range(0,size-i-1,1):
            if arr[j]>arr[j+1]:
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
    # Check for duplicates in the sorted array
    for i in range(0,size-1,1):
        if arr[i]==arr[i+1]:
            return True
    return False

# Let's Start Here
arr1=[1,2,3,1]
arr2=[1,2,3,4]
arr3=[1, 1, 1, 3, 3, 4, 2, 4, 2]
result1=get_check(arr1)
result2=get_check(arr2)
result3=get_check(arr3)
print("Result 1 : ",result1)
print("Result 2 : ",result2)
print("Result 3 : ",result3)