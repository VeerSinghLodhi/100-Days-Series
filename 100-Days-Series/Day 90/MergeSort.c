#include<stdio.h>
// Function to merge two sorted halves of the array
void merge(int arr[], int s, int e) {
    int mid = (s + e) / 2;
    int j = mid + 1, i = s, k = s;
    int temp[s + e + 1]; // Temporary array for merging
    // Merge elements from both halves in sorted order
    while (i <= mid && j <= e) {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    // Copy remaining elements from the left half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    // Copy remaining elements from the right half
    while (j <= e) {
        temp[k++] = arr[j++];
    }
    // Copy sorted elements back to the original array
    for (int i = s; i <= e; i++) {
        arr[i] = temp[i];
    }
}
// Recursive function to perform Merge Sort
void getMergeSort(int arr[], int s, int e) {
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    // Sort the left half
    getMergeSort(arr, s, mid);
    // Sort the right half
    getMergeSort(arr, mid + 1, e);
    // Merge the two sorted halves
    merge(arr, s, e);
}
// Function to print the elements of the array
void getPrintArray(int arr[], int size) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Main function to demonstrate Merge Sort
void main() {
    int arr[] = {5, 4, 6, 3, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the array before sorting
    printf("\nBefore Sorting..");
    getPrintArray(arr, size);

    // Perform Merge Sort
    getMergeSort(arr, 0, size - 1);

    // Print the array after sorting
    printf("\nAfter Sorting..");
    getPrintArray(arr, size);
}
