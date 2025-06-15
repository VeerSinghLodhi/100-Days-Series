#include <iostream>
#include <string>
using namespace std;
// Function to swap two characters
void swap(char &x, char &y) {
    char temp = x;
    x = y;
    y = temp;
}
// Recursive function to generate permutations
void permute(string &str, int l, int r) {
    if (l == r) {
        cout << str << endl; // Print the permutation
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]); // Swap current character with the leftmost character
            permute(str, l + 1, r); // Recur for the rest of the string
            swap(str[l], str[i]); // Backtrack to the original configuration
        }
    }
}
// Let's Start Here
int main() {
    string str = "ABC";
    cout << "All permutations of the string \"" << str << "\" are:" << endl;
    permute(str, 0, str.length() - 1);
    return 0;
}
