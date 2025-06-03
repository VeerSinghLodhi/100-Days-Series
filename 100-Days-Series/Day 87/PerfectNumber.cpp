#include<iostream>
using namespace std;
// Function to print Perfect Square Number between 1 to N
void getPrintPerfectSquareNumber(int n){
    for(int i=1;i*i<=n;i++){
        cout<<(i*i)<<"  ";
    }
}
// Let's Start Here
int main(){
    int n;
    cout<<"\nEnter the value of N : ";
    cin>>n;
    cout<<"\nPerfect Square Number between 1 to "<<n<<" :"<<endl;
    getPrintPerfectSquareNumber(n);
    return 0;
}