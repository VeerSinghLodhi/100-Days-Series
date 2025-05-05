#include<iostream>
using namespace std;
// Function to print Floyd' s Triangle
void getPrintFloydsTriangle(int rows){
    int num=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<num++<<" ";
        }
        cout<<endl;
    }
}
// Let's Start here
int main(){
    int rows;
    cout<<"\nEnter the number of rows : ";
    cin>>rows;
    getPrintFloydsTriangle(rows);
}