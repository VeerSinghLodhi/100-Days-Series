#include<stdio.h>
// function to print Floyd's Triangle
void getPrintPattern(int rows){
    int num=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num++);
        }
        printf("\n");
    }
}
// Let's Start here
void main(){
    int rows;
    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
    getPrintPattern(rows);
}