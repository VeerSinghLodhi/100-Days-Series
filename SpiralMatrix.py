
# Function to print a matrix in spiral order.
def getSpiralMatrix(matrix):
    top=0
    bottom=len(matrix)-1
    left=0
    right=len(matrix[0])-1
    while top<=bottom and left<=right:
        # traverse from left to right
        for col in range(left,right+1,1):
            print(matrix[top][col],end=" ")
        top+=1
        # traverse from top to bottom
        for row in range(top,bottom+1,1):
            print(matrix[row][right],end=" ")
        right-=1
        if top<=bottom:
            # traverse from right to left
            for col in range(right,left-1,-1):
                print(matrix[bottom][col],end=" ")
            bottom-=1
        if left<=right:
            #traverse from bottom to top
            for row in range(bottom,top-1,-1):
                print(matrix[row][left],end=" ")
            left+=1

# Let's Start here
matrix=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
getSpiralMatrix(matrix)