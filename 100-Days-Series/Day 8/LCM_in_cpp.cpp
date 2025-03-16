// Least Comman Multiple(LCM)
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
// Function for calculate LCM
int getLCM(int num1,int num2){
    int gcd=getGCD(num1,num2);
    return num1*num2/gcd;
}
// Let's Start here
int main(){
    int num1,num2;
    cout<<"\nEnter two Integers : ";
    cin>>num1>>num2;
    // Ensure the numbers are positive
    if(num1<0)
        num1=-num1;
    if(num2<0)
        num2=-num2;
    // Calculate LCM
    int lcm=getLCM(num1,num2);
    cout<<"\nLCM of "<<num1<<" and "<<num2<<" is : "<<lcm<<endl;
    return 0;
}