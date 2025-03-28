#include<iostream>
using namespace std;
// Method to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}
// Let's Start here
int main(){
    int num,fact;
    // Input a number
    cout<<"\nEnter a number : ";
    cin>>num;
    fact=factorial(num);
    cout<<"\nFactorial of "<<num<<" is : "<<fact<<endl;
    return 0;
}