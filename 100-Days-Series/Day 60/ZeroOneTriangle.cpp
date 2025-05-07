#include <iostream>
using namespace std;
int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        int start;
        if (i % 2 == 0) {
            start = 0; // Even row starts with 0
        } else {
            start = 1; // Odd row starts with 1
        }

        for (int j = 1; j <= i; j++) {
            cout << start << " ";
            if (start == 1) {
                start = 0;
            } else {
                start = 1;
            }
        }
        cout << endl;
    }
    return 0;
}
