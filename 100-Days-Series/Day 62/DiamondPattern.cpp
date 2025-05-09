#include<iostream>
using namespace std;
// Funtion to print Diamond Pattern
void getPrintDiamond(int n){
    // Print the upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            cout<<" ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int space = 1; space <= n - i; space++) {
            cout<<" ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
// Let's Start Here
int main(){
    int rows;
    cout<<"\nEnter the number of rows : ";
    cin>>rows;
    getPrintDiamond(rows);
}