
# Function to find unique elements.
def getUnionOfList(arr1,arr2):
    uniArray=[]
    k=0
    for i in range(0,len(arr1),1):
        uniArray.append(arr1[i])
        k+=1
    for i in range(0,len(arr2),1):
        isPresent=False
        for j in range(0,k,1):
            if arr2[i]==uniArray[j]:
                isPresent=True
                break
        if not isPresent:
            uniArray.append(arr2[i])
            k+=1
    return uniArray

# Let's Start here
arr1=[1,2,3,4,5,6,7,8]
arr2=[5,6,7,8,9,10,10]
print("Union of Arrays : ")
print(getUnionOfList(arr1,arr2))