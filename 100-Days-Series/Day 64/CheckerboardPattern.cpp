#include<iostream>
using namespace std;
// Function to print Checkerboard Pattern5
void getPrintCheckerboard(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==0){
                cout<<"* ";
            }else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
// Let's Start Here
int main(){
    int n;
    cout<<"\nEnter the size of Checkerboard : ";
    cin>>n;
    getPrintCheckerboard(n);
}