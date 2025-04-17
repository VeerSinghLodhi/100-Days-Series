#include<stdio.h>
// Let's Start here
void main(){
    int rows=3,cols=3;
    int arr1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr2[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    int result[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    // Displaying the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}