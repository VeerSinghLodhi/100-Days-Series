#include<stdio.h>
// Funtion to print Palindromic Pattern with number
void getPrintPalindromicPattern(int rows){
    for(int i=1;i<=rows;i++){
        // Print Spaces
        for(int j=1;j<=rows-i;j++){
            printf("  ");
        }
        // Print Increasing numbers
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        // Print Decreasing number
        for(int j=i-1;j>=1;j--){
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
    getPrintPalindromicPattern(rows);
}