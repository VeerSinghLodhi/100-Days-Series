#include<iostream>
using namespace std;
// Recursion method to find sum of first n natural numbers.
int getSum(int num){
    if(num==1)
        return 1;// Base Case
    return num+getSum(num-1);// Recursion step
}
// Let's Start here
int main(){
    int num;
    cout<<"\nEnter a number : ";
    cin>>num;
    //Call the function and display the result
    cout<<"\nSum of first "<<num<<" natural numbers : "<<getSum(num);
}