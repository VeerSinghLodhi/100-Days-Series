// Count Digits in a Number
#include<iostream>
using namespace std;
// Function for count digits
int getCountDigits(int num){
    int count=0;
    // Handle negative numbers
    if(num<0)
        num=-num;
    // Count Digits
    while(num!=0){
        count++;
        num/=10;
    }
    return count;
}
// Let's Start here
int main(){
    int num;
    // Input a number
    cout<<"\nEnter an Integer : ";
    cin>>num;
    // Call the function and display the result
    int digits=getCountDigits(num);
    cout<<"\nThe number of digits in "<<num<<" is : "<<digits;
    return 0;
}