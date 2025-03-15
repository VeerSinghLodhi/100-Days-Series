//  Greatest Common Divisor (GCD)
#include<iostream>
using namespace std;
// Function to calculate GCD using the Euclidean algorithm
int getGCD(int num1,int num2){
    while(num2!=0){
        int remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
    return num1;
}
//Let's Start here
int main(){
    int num1,num2;
    cout<<"\nEnter two Integers : ";
    cin>>num1>>num2;
    //Ensure the numbers are positive 
    if(num1<0)
        num1=-num1;
    if(num2<0)
        num2=-num2;
    //Calculate GCD
    int gcd=getGCD(num1,num2);
    cout<<"GCD of "<<num1<<" and "<<num2<<" is : "<<gcd<<endl;
    return 0;
}