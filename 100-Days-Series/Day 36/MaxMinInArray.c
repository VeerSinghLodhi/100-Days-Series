#include<stdio.h>
// Function to find Max and Min Value in an array
void getFindMaxAndMin(int arr[], int size, int *largest, int *smallest) {
    // Loop through the array to find the largest and smallest elements
    for (int i = 0; i < size; i++) {
        // Update largest if the current element is greater
        if (*largest < arr[i])
            *largest = arr[i];
        // Update smallest if the current element is smaller
        if (*smallest > arr[i])
            *smallest = arr[i];
    }
}
// Let's Start here
void main() {
    // Initialize an array with elements
    int arr[] = {4, 3, 5, 2, 6, 1, 8, 9};
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    // Initialize largest and smallest with the first element of the array
    int largest = arr[0];
    int smallest = arr[0];

    // Call the function to find largest and smallest values
    getFindMaxAndMin(arr, size, &largest, &smallest);

    // Print the results
    printf("Largest: %d, Smallest: %d\n", largest, smallest);
}
