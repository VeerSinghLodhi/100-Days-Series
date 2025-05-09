#include <stdio.h>
// Function to print Diamond Pattern
void getPrintDiamondPatten(int n){
    // Print the upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

}
// Let's Start Here
void main() {
    int rows;
    printf("Enter the number of rows for the diamond pattern: ");
    scanf("%d", &rows);
    getPrintDiamondPatten(rows);

}
