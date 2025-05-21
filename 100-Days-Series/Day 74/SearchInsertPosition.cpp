#include <iostream>
#include <vector>
using namespace std;

// Function to search insert position
int getSearchInsertPosition(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    // If target is greater than the last element, return size of vector
    if (target > nums.at(high))
        return high + 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (target == nums.at(mid)) {
            return mid; // Target found
        } else if (target > nums.at(mid)) {
            low = mid + 1; // Move to the right half
        } else {
            high = mid - 1; // Move to the left half
        }
    }
    return low; // Insert position
}

// Let's Start Here
int main() {
    vector<int> arr = {1, 3, 5, 6};
    int target = 2;
    int pos = getSearchInsertPosition(arr, target);
    cout << "\nPosition is " << pos << endl;
    return 0;
}
