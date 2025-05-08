#include<iostream>
using namespace std;
// Function to print Palindromic Pattern With number
void getPrintPalindromic(int rows){
    for(int i=1;i<=rows;i++){
        // Print Spaces
        for(int j=1;j<=rows-i;j++){
            cout<<"  ";
        }
        // Print Increading numbers
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        // Print Decreasing numbers
        for(int j=i-1;j>=1;--j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
// Let's Start Here
int main(){
    int rows;
    cout<<"\nEnter the number of rows : ";
    cin>>rows;
    getPrintPalindromic(rows);
}