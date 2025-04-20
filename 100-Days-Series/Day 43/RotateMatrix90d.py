
# Function to rotate a matrix by 90 degrees clockwise
def getRotate(matrix):
    for i in range(0,len(matrix),1):
        for j in range(i+1,len(matrix),1):
            temp=matrix[i][j]
            matrix[i][j]=matrix[j][i]
            matrix[j][i]=temp
    
    for i in range(0,len(matrix),1):
        left = 0
        right= len(matrix)-1
        while left<right:
            temp=matrix[i][left]
            matrix[i][left]=matrix[i][right]
            matrix[i][right]=temp
            left+=1
            right-=1




# Function for print matrix
def getPrintMatrix(matrix):
    for i in range(0,len(matrix),1):
        for j in range(0,len(matrix),1):
            print(matrix[i][j],end=" ")
        print()



# Let's Start here
matrix=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
print('Original Matrix : ')
getPrintMatrix(matrix)
print('Rotated matrix : ')
getRotate(matrix)
getPrintMatrix(matrix)