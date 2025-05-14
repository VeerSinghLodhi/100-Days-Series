#include<stdio.h>
// Funtion to print Palindromic Pattern with Alphabet
void getPrintPalindromicPattern(int rows){
    for(int i=1;i<=rows;i++){
        char ch='A';
        // Print Spaces
        for(int j=1;j<=rows-i;j++){
            printf("  ");
        }
        // Print Increasing Alphabet
        for(int j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        for(int j=i-1;j>=1;j--){
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
    getPrintPalindromicPattern(rows);
}