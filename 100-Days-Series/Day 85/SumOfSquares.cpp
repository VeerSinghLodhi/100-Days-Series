#include<iostream>
using namespace std;
// Let's Start Here
int main(){
    int n;
    // Input : value of N
    cout<<"\nEnter  the value of N : ";
    cin>>n;

    // Formula to calculate the sum of squares
    int sum = ( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6;

    // Output : sum of the series
    cout<<"\nSum of the series : "<<sum<<endl;
    return 0;

}