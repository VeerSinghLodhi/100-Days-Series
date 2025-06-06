#include <iostream>
using namespace std;
// Function to merge two sorted halves of the array
void merge(int arr[], int s, int e) {
    int mid = (s + e) / 2;
    int j = mid + 1;
    int i = s;
    int k = s;
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

// Function to print an array
void getPrintArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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

// Main function to test the Merge Sort implementation
int main() {
    int arr[] = {5, 4, 6, 3, 7, 8};
    int sz = sizeof(arr) / sizeof(arr[0]);
    cout << "\nBefore Sorting.." << endl;
    getPrintArray(arr, sz);
    getMergeSort(arr, 0, sz - 1);
    cout << "\nAfter Sorting.." << endl;
    getPrintArray(arr, sz);
}
