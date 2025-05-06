#include<stdio.h>
// Function to print Inverted Half Pyramid
void getPrintPyramid(int rows){
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
// Let's Start Here
void main(){
    int rows;
    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
    getPrintPyramid(rows);
}