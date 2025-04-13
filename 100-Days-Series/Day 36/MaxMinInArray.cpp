#include<iostream>
#include<vector>
using namespace std;
// Function to find Max & Min value in the array
void getFindMaxAndMin(const vector<int>& arr, int &largest, int &smallest) {
    // Iterate through each element in the array
    for (int num : arr) {
        // Update largest if the current element is greater
        if (largest < num)
            largest = num;
        // Update smallest if the current element is smaller
        if (smallest > num)
            smallest = num;
    }
}
// Let's Start here
int main() {
    // Initialize a vector with elements
    vector<int> arr = {4, 3, 5, 2, 6, 1, 7};

    // Initialize largest and smallest with the first element of the vector
    int largest = arr.at(0);
    int smallest = arr.at(0);
    // Call the function to find largest and smallest values
    getFindMaxAndMin(arr, largest, smallest);
    // Print the results
    cout << "\nLargest: " << largest << ", Smallest: " << smallest << endl;

    return 0; // Return 0 to indicate successful execution
}
