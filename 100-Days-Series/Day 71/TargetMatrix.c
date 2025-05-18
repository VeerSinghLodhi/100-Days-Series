#include<stdio.h>
// Function to search for a target in a matrix
int getFindTarget(int rows,int cols,int matrix[rows][cols],int target){
    // Treat the matrix as a single sorted array
    int left=0,right=rows*cols-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        int midValue=matrix[mid/cols][mid%cols];
        if (midValue==target){
            return 1;
        }else if(midValue<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return 0;
}
// Let's Start Here
void main(){
    int matrix[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {10,11,12,14}
    };
    int target=61;
    int rows=sizeof(matrix)/sizeof(matrix[0]);
    int cols=sizeof(matrix[0])/sizeof(matrix[0][0]);
    int result=getFindTarget(rows,cols,matrix,target);
    if(result)
        printf("\nTarget %d exists in the matrix.",target);
    else
        printf("\nTarget %d does not exist in the matrix.",target);
}