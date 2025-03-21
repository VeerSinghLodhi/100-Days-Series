#include<iostream>
using namespace std;
// Function for print pyramid pattern
void getPrintPyramidPattern(int rows){
    for(int i=1;i<=rows;i++){
        // Print spaces
        for(int j=1;j<=rows-i;j++){
            cout<<" ";
        }
        // Print stars
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        // Move to the next line
        cout<<endl;
    }
}
// Let's Start here
int main(){
    int rows;
    cout<<"\nEnter the number of rows for the pyramid : ";
    cin>>rows;
    // Call the function for print pyramid pattern
    getPrintPyramidPattern(rows);
    return 0;
}