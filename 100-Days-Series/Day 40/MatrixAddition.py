
# Function for matrix addition
def getAdd(arr1,arr2):
    if len(arr1)!=len(arr2) and len(arr1[0])!=len(arr2[0]):
        print('Matrices must have the same dimensions for addition.')
        return
    result=[]
    for i in range(0,len(arr1),1):
        row=[]
        for j in range(0,len(arr1[0]),1):
            row.append(arr1[i][j]+arr2[i][j])
        result.append(row)
    return result

# Let's Start here
arr1=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
arr2=[
    [10,20,30],
    [40,50,60],
    [70,80,90]
]
result=getAdd(arr1,arr2)
print(result)