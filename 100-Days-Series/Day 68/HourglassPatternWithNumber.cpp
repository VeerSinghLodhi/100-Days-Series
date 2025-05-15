#include<iostream>
using namespace std;
// Function to print Hourglass Pattern With Number
void getPrintPattern(int n){
    for (int i = n; i >= 1; i--) {
            for (int j = 0; j < n - i; j++) {
                cout<<"  ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < n - i; j++) {
                cout<<"  ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                cout<<j<<" ";
            }
            cout<<endl;
        }
}
// Let's Start Here
int  main(){
    int rows;
    cout<<"\nEnter the number of rows : ";
    cin>>rows;
    getPrintPattern(rows);
    return 0;
}