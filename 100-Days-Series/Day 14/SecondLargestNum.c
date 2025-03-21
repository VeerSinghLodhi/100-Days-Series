#include<stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                arr[j]=arr[j]+arr[i+1];
                arr[i+1]=arr[j]-arr[i+1];
                arr[j]=arr[j]-arr[i+1];
            }
        }
    }
}
void main() {
    int n;
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // print array elements
    for (int i = 0; i < n; i++) {
        printf("%d ,", arr[i]);
    }
    // Sort the array
    bubbleSort(arr, n);
    // Second largest number
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nThe Second largest no. is %d",arr[size-2]);
}
