#include<stdio.h>
// Function to check if the array has duplicate values
int getCheck(int arr[], int size) {
    // Bubble Sort to sort the array in ascending order
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Check for duplicates in the sorted array
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return 1;
        }
    }
    return 0;
}
// Let's Start Here
void main() {
    // Main function 
    int arr1[] = {1, 2, 3, 1};
    int arr2[] = {1, 2, 3, 4};
    int arr3[] = {1, 1, 1, 3, 3, 4, 2, 4, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int result1 = getCheck(arr1, size1);
    int result2 = getCheck(arr2, size2);
    int result3 = getCheck(arr3, size3);
    printf("\nResult 1 : %d", result1);
    printf("\nResult 2 : %d", result2);
    printf("\nResult 3 : %d", result3);
}
