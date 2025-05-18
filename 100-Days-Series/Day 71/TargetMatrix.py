
# Function to search a target in the matrix.
def get_find_target(matrix,target):
    rows=len(matrix)
    cols=len(matrix[0])
    left,right=0,rows*cols-1
    while left<=right:
        mid=left+(right-left)//2
        midValue=matrix[mid//cols][mid%rows]
        if midValue==target:
            return True
        elif midValue<target:
            left=mid+1
        else:
            right=mid-1
    return False

# Let's Start Here
matrix=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
target=8
res=get_find_target(matrix,target)
if res:
    print('Target',target,' exists in the matrix.')
else:
    print('Target',target,' does not exist in the matrix.')