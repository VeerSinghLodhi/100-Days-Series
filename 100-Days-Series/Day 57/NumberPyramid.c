#include<stdio.h>
// Function to print Number Pyramid
void getPrintPyramid(int n){

    for(int i=1;i<=n;i++){
        // Print Spaces 
        for(int j=i;j<n;j++){
            printf(" ");
        }
        // Print Ascending numbers
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        // Print Descending numbers
        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
// Let's Start here
void main(){
    int rows;
    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
    getPrintPyramid(rows);
}