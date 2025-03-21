#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Current element to be placed in the sorted part
        int j = i - 1;
        // Move elements of arr[0..i-1] that are greater than `key` to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // Place `key` in its correct position
        arr[j + 1] = key;
    }
}
int main(){
    int n;
     // Input the size of the array
     cout<<"\nEnter the number of elements in the array: ";
     cin>>n ;
     int arr[n];// An array created with n size
     // Input array elements
     cout<<"\nEnter the elements of the array:\n";
     for (int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
     }
     // print array elements
     for (int i = 0; i < n; i++) {
         cout<<"  "<<arr[i];
     }
     // Sort the array
     insertionSort(arr, n);
     // Second largest number
     int size=sizeof(arr)/sizeof(arr[0]);
     cout<<"\nThe Second largest no. is "<<arr[size-2];
}