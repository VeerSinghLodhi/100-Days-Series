#include<stdio.h>
// Function to Rotate a matrix by 90 degrees clockwise.
void getRotate(int n,int matrix[n][n]){
    // Step 1: Transpose the matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    // Step 2: Reverse each row
    for(int i=0;i<n;i++){
        int left=0,right=n-1;
        while(left<right){
            int temp=matrix[i][left];
            matrix[i][left]=matrix[i][right];
            matrix[i][right]=temp;
            left++;
            right--;
        }
    }
}
// function for print matrix
void getPrintMatrix(int size,int matrix[size][size]){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
// Let's Start here
void main(){
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int n=3;
    printf("\nOriginal Matrix :\n");
    getPrintMatrix(n,matrix);
    printf("\nRotated Matrix :\n");
    getRotate(n,matrix);
    getPrintMatrix(n,matrix);
}
