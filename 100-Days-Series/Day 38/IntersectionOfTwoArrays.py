

#Functiont to Find common elements between two arrays.
def getFindCommanElements(arr1,arr2):
    for i in range (0,len(arr1),1):
        for j in range(0,len(arr2),1):
            if arr1[i]==arr2[j]:
                print(arr1[i],end=" ")
                break


# Let's Start here
arr1 = [1, 2, 3, 4, 5]
arr2 = [3, 4, 5, 6, 7]
getFindCommanElements(arr1,arr2)