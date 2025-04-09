
# Function for bubble sort
def getBubbleSort(arr):
    for i in range(0,len(arr)-1,1):
        for j in range(0,len(arr)-1-i,1):
            if arr[j]>arr[j+1]:
                arr[j]=arr[j]+arr[j+1]
                arr[j+1]=arr[j]-arr[j+1]
                arr[j]=arr[j]-arr[j+1]
    
    return arr
#Let's Start here
arr=[4,3,5,2,6,7,8,1]
print("Before Sorting..")
print(arr)
print("After Bubble Sorting..")
arr=getBubbleSort(arr)
print(arr)