#include<iostream>
using namespace std;
// Recursion Method to find GCD 
int getGCD(int num1,int num2){
    if(num2==0){
        return num1;
    }
    return getGCD(num2,num1%num2);// Recursion Step.
}
// method to find LCM using the recursion GCD.
int getLCM(int num1,int num2){
    return (num1*num2)/getGCD(num1,num2);
}
// Let's Start here
int main(){
    int num1,num2;
    cout<<"\nEnter 1 number : ";
    cin>>num1;
    cout<<"\nEnter 2 number : ";
    cin>>num2;
    int lcm=getLCM(num1,num2);
    cout<<"\nLCM of "<<num1<<" and "<<num2<<" is : "<<lcm<<endl;
}