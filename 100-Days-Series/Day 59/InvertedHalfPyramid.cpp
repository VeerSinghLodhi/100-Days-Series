#include<iostream>
using namespace std;
// Function to print Inverted Half Pyramid 
void getPrintPyramid(int rows){
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
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
    getPrintPyramid(rows);
}