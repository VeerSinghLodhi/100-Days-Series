#include<stdio.h>
// Function to find all occurrences of a key in the array
void findOccurrence(int arr[], int size, int key, int index) {
    // Base case: if the current index reaches the size of the array, stop recursion
    if (size == index)
        return;
    // If the current element matches the key, print its index
    if (arr[index] == key) {
        printf("%d ", index);
    }
    // Recursive call to check the next element
    findOccurrence(arr, size, key, ++index);
}
// Let's Start Here
void main() {
    // Input array
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    // Key to search for in the array
    int key = 2;
    // Call the function to find all occurrences of the key
    findOccurrence(arr, size, key, 0);
}
