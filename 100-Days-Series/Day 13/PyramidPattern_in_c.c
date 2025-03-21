#include <stdio.h>
// Function for print Pyramid Pattern
void getPrintPyramidPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
}
// Let's Start here
void main() {
    int rows;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    // Call the function for Print Pyramid Patten
    getPrintPyramidPattern(rows);
}
