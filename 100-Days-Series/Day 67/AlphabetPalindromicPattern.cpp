#include<iostream>
using namespace std;
// Function to print Palindromic Pattern With Alphabet
void getPrintPalindromic(int rows){
    for(int i=1;i<=rows;i++){
        char ch='A';
        // Print Spaces
        for(int j=1;j<=rows-i;j++){
            cout<<"  ";
        }
        // Print Increading Alphabet
        for(int j=1;j<=i;j++){
            cout<<ch++<<" ";
        }
        for(int j=i-1;j>=1;--j){
            cout<<ch++<<" ";
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