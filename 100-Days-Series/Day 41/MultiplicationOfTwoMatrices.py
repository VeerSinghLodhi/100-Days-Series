
# Function for matrix multiplication
def getMatrixMultiplication(a,b):
    c=[]  # For Result
    # Performing Matrix multiplication
    for i in range(0,len(a),1):
        row=[]
        for j in range(0,len(b[0]),1):
            sum=0
            for k in range(0,len(a[0]),1):
                sum+=a[i][k]*b[k][j]
            row.append(sum)
        c.append(row)
    return c

# Let's Start here
print('----For Matrix A----')
print('Enter Rows : ',end="")
rowsA=int(input())
print('Enter Colums : ',end="")
colsA=int(input())
print('----For Matrix B----')
print('Enter Column (Rows automatically ',rowsA,') :' ,end="")
colsB=int(input())

a=[]
b=[]
# Input for matrix A
print('Enter Elements for Matrix A (',rowsA,'x',colsA,'):')
for i in range(0,rowsA,1):
    row=[]
    for j in range(0,colsA,1):
        print('A[',i,'][',j,'] :',end=" ")
        val=int(input())
        row.append(val)
    a.append(row)

# Input for matrix B
print('Enter Elements for Matrix B (',colsA,'x',colsB,'):')
for i in range(0,colsA,1):
    row=[]
    for j in range(0,colsB,1):
        print('B[',i,'][',j,'] :',end=" ")
        val=int(input())
        row.append(val)
    b.append(row)


# Call Function to perform multiplication
c=getMatrixMultiplication(a,b)
print(c)