#include <stdio.h>
// Function to print Hourglass Pattern
void getPrintHourglass(int n){
    // Upper part
    for (int i = n; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower part
    for (int i = 2; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}
// Let's Start Here
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    getPrintHourglass(rows);

}
