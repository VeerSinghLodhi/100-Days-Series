#include<stdio.h>
// Function to print matrix in spiral order
void getSpiralMatrix(int rows,int cols,int matrix[rows][cols]){
    int top=0,bottom=rows-1;
    int left=0,right=cols-1;
    while(top<=bottom && left<=right){
        // traverse from left to right
        for(int col=left;col<=right;col++){
            printf("%d ",matrix[top][col]);
        }
        top++;
        // traverse from top to bottom
        for(int row=top;row<=bottom;row++){
            printf("%d ",matrix[row][right]);
        }
        right--;
        if(top<=bottom){
            // traverse from right to left
            for(int col=right;col>=left;col--){
                printf("%d ",matrix[bottom][col]);
            }
            bottom--;
        }
        if(left<=right){
            // traverse from bottom to top
            for(int row=bottom;row>=top;row--){
                printf("%d ",matrix[row][left]);
            }
            left++;
        }
    }
}
// Let's Start here
void main(){
    int rows=3,cols=3;
    int matrix[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    getSpiralMatrix(rows,cols,matrix);
}