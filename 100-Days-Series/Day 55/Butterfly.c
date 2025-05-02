#include <stdio.h>
void printButterfly(int n) {
    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower part of the butterfly
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
// Let's Start here
void main() {
    int n;
    printf("Enter the number of rows for the butterfly: ");
    scanf("%d", &n);
    printButterfly(n);
}
