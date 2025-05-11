#include <stdio.h>
// Function to print Checkerboard Pattern
void getPrintCheckerboard(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
// Let's Start Here
void main() {
    int n;
    printf("Enter the size of the checkerboard (n): ");
    scanf("%d", &n);
    getPrintCheckerboard(n);
}
