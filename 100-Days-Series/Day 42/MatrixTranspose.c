#include<stdio.h>
// Function for MatrixTranspose
void getTransposseMatrix(int rows,int cols,int matrix[rows][cols],int transposeMatrix[cols][rows]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transposeMatrix[j][i]=matrix[i][j];
        }
    }
}
// Function to print matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
// Let's Start here
void main(){
    printf("\n---------------------------");
    int rows,cols;
    printf("\nEnter Rows For Matirx : ");
    scanf("%d",&rows);
    printf("\nEnter Columns For Matrix : ");
    scanf("%d",&cols);
    int matrix[rows][cols];
    int transposeMatrix[cols][rows];
    printf("\nEnter Element for matrix : ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("\nMatrix[%d][%d] = ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nNormal Matrix\n");
    printMatrix(rows,cols,matrix);
    printf("\nTranspose Matrix\n");
    getTransposseMatrix(rows,cols,matrix,transposeMatrix);
    printMatrix(cols,rows,transposeMatrix);
}