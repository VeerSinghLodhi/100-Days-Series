#include<stdio.h>
// function to print hollow rectangle pattern
void getHollowRectangle(int rows,int cols){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(i==1 || i==rows || j==1 || j==cols){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
// Let's Start Here
void main(){
    int rows,cols;
    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
    printf("\nEnter the number of columns : ");
    scanf("%d",&cols);

    getHollowRectangle(rows,cols);
}