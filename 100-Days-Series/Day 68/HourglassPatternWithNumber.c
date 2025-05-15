#include<stdio.h>
// Function to print Hourglass Pattern With Number
void getPrintPattern(int n){
    for (int i = n; i >= 1; i--) {
            for (int j = 0; j < n - i; j++) {
                printf("  ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                printf("%d ",j);
            }
            printf("\n");
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < n - i; j++) {
                printf("  ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
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
    getPrintPattern(rows);
}