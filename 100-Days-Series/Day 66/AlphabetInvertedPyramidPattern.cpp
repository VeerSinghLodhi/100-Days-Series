#include<iostream>
using namespace std;
// Function to print Alphabet Inverted Pyramid Pattern
void getPrintPattern(int rows){
    for(int i=rows;i>=1;--i){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<(ch++)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int rows;
    cout<<"\nEnter the number of rows : ";
    cin>>rows;
    getPrintPattern(rows);
    return 0;
}