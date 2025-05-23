#include <iostream>
using namespace std;

int main() {
    int nums[3][3] = {
        {1, 4, 9},
        {11, 4, 3},
        {2, 2, 3}
    };
    int targetRow = 1; // Index of the row to sum (second row)
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += nums[targetRow][i];
    }

    cout << "The sum of the numbers in row " << (targetRow + 1) << " is: " << sum << endl;
    return 0;
}
