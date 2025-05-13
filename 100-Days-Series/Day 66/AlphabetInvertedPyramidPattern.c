#include<stdio.h>
// Function to print Alphabet Inverted Pyramid Pattern
void getPrintPattern(int rows){
    for(int i=rows;i>=1;i--){
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
}
// Let's Start Here
void main(){
    int rows;
    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
    getPrintPattern(rows);
}