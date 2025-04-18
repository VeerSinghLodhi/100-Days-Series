#include<stdio.h>

// Function for matrix multiplication
void matrixMultiplication(int rowsA,int colsA,int colsB){
    int a[rowsA][colsA], b[colsA][colsB], c[rowsA][colsB];
    // Input for matrix A
    printf("\nEnter elements for matrix A (%dx%d):\n",rowsA,colsA);
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsA;j++){
            printf("A[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    // Input for matrix B
    printf("Enter element for matrix B (%dx%d):\n",colsA,colsB);
    for(int i=0;i<colsA;i++){
        for(int j=0;j<colsB;j++){
            printf("B[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    // Initializing Matrix C to zero
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            c[i][j]=0;
        }
    }
    // Performing Matrix Multiplication
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            for(int k=0;k<colsA;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    // Printing the Resultant Matrix
    printf("Resultant Matrix C (%dx%d):\n", rowsA, colsB);
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            printf("c[%d][%d]=%d ",i,j,c[i][j]);
        }
        printf("\n");
    }
}

// Let's Start here
void main(){
    int rowsA,colsA,colsB;
    printf("\n----For Matrix A----");
    printf("\nEnter Rows : ");
    scanf("%d",&rowsA);
    printf("\nEnter Columns : ");
    scanf("%d",&colsA);
    printf("\n----For Matrix B----");
    printf("\nEnter Columns (rows automatically %d): ",colsA);
    scanf("%d",&colsB);

    // Call function to perform multiplication
    matrixMultiplication(rowsA,colsA,colsB);

}