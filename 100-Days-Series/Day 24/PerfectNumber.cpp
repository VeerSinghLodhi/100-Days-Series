#include<iostream>
using namespace std;
// Function for check if number is perfect number or not.
bool getIsPerfectNumber(int num){
    if(num<=1)
        return false;
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0)
            sum+=i;
    }
    return sum==num;
}
// Let's Start here
int main(){
    int num;
    cout<<"\nEnter a number : ";
    cin>>num;
    // Call the function and display the result.
    if(getIsPerfectNumber(num))
        cout<<num<<" is a perfect number";
    else
        cout<<num<<" is not a perfect number";
}