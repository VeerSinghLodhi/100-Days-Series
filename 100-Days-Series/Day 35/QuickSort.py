
def partition(arr,low,high):
    pivot=arr[high]
    i=low-1
    for j in range(low,high,1):
        if arr[j]<=pivot:
            i+=1
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
    temp=arr[i+1]
    arr[i+1]=arr[high]
    arr[high]=temp
    return i+1 # Return the pivot index

# Function for Quick Sort
def getQuickSort(arr,low,high):
    if low<high:
        pivotIndex=partition(arr,0,high)
        getQuickSort(arr,low,pivotIndex-1)
        getQuickSort(arr,pivotIndex+1,high)

# Let's Start here
arr=[5,4,6,3,7,2,8,9,1]
print("Before Sorting..")
print(arr)
print("After Sorting..")
getQuickSort(arr,0,len(arr)-1)
print(arr)