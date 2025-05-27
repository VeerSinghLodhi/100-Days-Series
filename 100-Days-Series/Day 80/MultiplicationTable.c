#include<stdio.h>
// Function to print the multiplication table for a given number
void getPrintTable(int number) {
    printf("\nMultiplication Table for %d:", number);
    for (int i = 1; i <= 10; i++) {
        // Correcting the multiplication logic in the loop
        printf("\n%d x %d = %d", number, i, (number * i));
    }
}
// Let's Start Here
void main() {
    int number;
    // Prompt the user to enter a number
    printf("\nEnter a number to print its multiplication table: ");
    scanf("%d", &number);
    // Call the function to print the multiplication table
    getPrintTable(number);
}
