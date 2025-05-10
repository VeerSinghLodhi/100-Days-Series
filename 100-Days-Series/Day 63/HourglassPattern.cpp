#include<iostream>
using namespace std;
// Function to print Hourglass Pattern
void getPrintHourglass(int n){
    // Upper part
    for (int i = n; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) {
            cout<<" ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower part
    for (int i = 2; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            cout<<" ";
        }
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
    getPrintHourglass(rows);
}