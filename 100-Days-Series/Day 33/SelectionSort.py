
# Function for selection sort
def getSelectionSort(arr):
    for i in range(0,len(arr)-1,1):
        minIndex=i
        for j in range(i+1,len(arr),1):
            if arr[j]<arr[minIndex]:
                minIndex=j
        temp=arr[i]
        arr[i]=arr[minIndex]
        arr[minIndex]=temp
    return arr
        
# Let's Start here
arr=[3,4,2,5,6,8,7,9,1]
print("Before Sorting..")
print(arr)
print("After Selection Sorting..")
print(getSelectionSort(arr))