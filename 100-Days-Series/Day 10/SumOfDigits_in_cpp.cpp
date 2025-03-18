#include<iostream>
using namespace std;
// Function for Calculate the sum of digits
int getSumOfDigits(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;  // Get the last digit
        num/=10;      // Remove the last digit
    }
    return sum;
}
// Let's Start here
int main(){
    int num;
    // Input the number
    cout<<"\nEnter an Integer : ";
    cin>>num;
    // Call the function and display the result
    int totalSum=getSumOfDigits(num);
    cout<<"\nSum of Digits is : "<<totalSum;
}