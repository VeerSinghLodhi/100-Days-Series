#include <stdio.h>
// Function to Search Insert Position
int getSearchInsertPosition(int nums[], int arrsize, int target) {
    int low = 0;
    int high = arrsize - 1;
    // If target is greater than the last element, return the array size
    if (target > nums[high])
        return arrsize;

    // Binary Search
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid; // Target found
        } else if (target < nums[mid]) {
            high = mid - 1; // Search in the left half
        } else {
            low = mid + 1; // Search in the right half
        }
    }
    return low; // Insert position
}

// Let's Start Here
int main() {
    int arr[] = {1, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    int pos = getSearchInsertPosition(arr, size, target);
    printf("\nPosition is %d\n", pos);
    return 0;
}
