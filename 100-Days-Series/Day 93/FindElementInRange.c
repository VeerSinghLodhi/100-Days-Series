#include<stdio.h>
// Function to find a number in a particular range.
int getFindNumberInRange(int arr[], int sr, int er, int number, int size) {
    // Ensure the range is valid
    if (sr < 0 || er >= size || sr > er) {
        return -1; // Invalid range
    }
    for (int i = sr; i <= er; i++) { // Loop through the range (inclusive)
        if (arr[i] == number) {
            return i; // Return index if number is found
        }
    }
    return -1; // Return -1 if not found
}
// Let's Start Here
void main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    // Number to find and range
    int numberToFind = 5;
    int sr = 2; // Start range
    int er = 7; // End range

    // Find the number in the specified range
    int res = getFindNumberInRange(arr, sr, er, numberToFind, size);
    if (res != -1) {
        printf("\nFound at Index: %d", res);
    } else {
        printf("\nNot Found!!");
    }
}
