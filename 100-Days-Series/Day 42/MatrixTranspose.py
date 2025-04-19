# Function for Matrix Transpose
def get_transpose_matrix(matrix):
    transpose = []
    for i in range(0,len(matrix[0]),1):  
        row = []
        for j in range(0,len(matrix),1):  
            row.append(matrix[j][i])
        transpose.append(row)
    return transpose

# Let's start here
matrix = [
    [1, 2, 3],
    [4, 5, 6]
]
print("Original Matrix:")
for row in matrix:
    print(row)

transpose_matrix = get_transpose_matrix(matrix)
print("\nTranspose Matrix:")
for row in transpose_matrix:
    print(row)
