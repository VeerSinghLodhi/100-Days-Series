#include<iostream>
using namespace std;
   // Recursive method to calculate Fibonacci numbers
int getFabonacci(int num){
    if(num<=1)
        return num;// Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    else
        return getFabonacci(num-1)+getFabonacci(num-2);// Recursive call
}
int main(){
    int num;
    // Number of terms in the Fibonacci series
    cout<<"\nEnter series terms : ";
    cin>>num;
    cout<<"Fibonacci series up to %d terms:"<<num;
    for(int i=0;i<num;i++){
        cout<<" "<<getFabonacci(i);
    }
    return 0;
}