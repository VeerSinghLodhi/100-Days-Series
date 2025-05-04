#include<iostream>
using namespace std;
// Function to print Number Pyramid
void getPrintPyramid(int n){
    for(int i=1;i<=n;i++){
        // Print Spaces
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        // Print Ascending numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // Print Descending numbers
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
// Let's Start here
int main(){
    int rows;
    cout<<"\nEnter the number of rows : ";
    cin>>rows;
    getPrintPyramid(rows);
}