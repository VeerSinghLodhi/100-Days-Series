#include<iostream>
using namespace std;
// Function to print Diamand Pattern With Numbers.
void getPrintPattern(int rows){
    // Upper Part 
    for(int i=1;i<=rows;i++){
        for(int space=1;space<=rows-i;space++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<i;
        }
        cout<<endl;
    }
    // Lower Part
    for(int i=rows-1;i>=1;i--){
        for(int space=1;space<=rows-i;space++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int rows;
    cout<<"\nEnter the number of rows : ";
    cin>>rows;
    getPrintPattern(rows);
}