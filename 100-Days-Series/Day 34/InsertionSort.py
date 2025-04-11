# Function for Insertion Sort
def getInsertionSort(arr):
    for i in range(1,len(arr),1):
        key=arr[i]
        j=i-1
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j]
            j=j-1
        arr[j+1]=key
    return arr

# Let's Start here
arr=[3,2,5,6,7,1]
print('Before Sorting...')
print(arr)
print('After Insertion Sorting...')
print(getInsertionSort(arr))