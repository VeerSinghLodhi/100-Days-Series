
# Function for merge two sorted list
def getMergeTwoArrays(arr1,arr2):
    i=0
    j=0
    k=0
    size1=len(arr1)
    size2=len(arr2)
    mergeList=[]
    # Traverse both list or arrays
    while i<size1 and j<size2:
        if arr1[i]<=arr2[j]:
            mergeList.append(arr1[i])
            i+=1
        else:
            mergeList.append(arr2[j])
            j+=1
    # Store Remaining elements of list1
    while i<size1:
        mergeList.append(arr1[i])
        i+=1
        k+=1
    # Store Remaining elements of list2
    while j<size2:
        mergeList.append(arr2[j])
        j+=1
        k+=1
        
    return mergeList

# Let's Start here
list1=[1,3,5,7,9]
list2=[2,4,6,8,10]
mergeList=getMergeTwoArrays(list1,list2)
print("print merged list")
print("Merged List : ",mergeList)
    
        