#include <iostream>
using namespace std;
// Function to check the Missing number in an array
int getMissingNumber(int arr[], int size) {
    int n = size + 1; // Actual range (1 to n)
    int totalSum = n * (n + 1) / 2; // Sum of 1 to n
    int arraySum = 0;
    for (int i = 0; i < size; i++) {
        arraySum += arr[i];
    }
    return totalSum - arraySum;
}
// Let's Start Here
int main() {
    int arr[] = {1, 2, 4, 5, 6}; // Example
    int size = sizeof(arr) / sizeof(arr[0]); // Number of elements in the array
    int missingNumber = getMissingNumber(arr, size);
    cout << "\nMissing number is: " << missingNumber << endl;
    return 0;
}
