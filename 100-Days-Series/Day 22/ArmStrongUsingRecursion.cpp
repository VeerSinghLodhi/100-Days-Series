#include<iostream>
using namespace std;
// Recursion method to calculate  power of a number
int getPower(int base,int exp){
    if(exp==0)
        return 1;// Base case : anything to the power of 0 is 1.
    return base*getPower(base,exp-1);// Recursive step
}
// Recursion method to calculate the sum of digits raised to the power
int getArmStrongNumber(int num,int power){
    if(num==0)
        return 0;
    int digit=num%10;// Get the last digit.
    return getPower(digit,power)+getArmStrongNumber(num/10,power); // Recursive step
}
// Recursion method to check if number is an armStrong number.
bool getIsArmStrong(int num){
    int countDigits=0,temp=num;
    while(temp!=0){ // Calculate number of digits
        countDigits++;
        temp/=10;
    }
    int sum=getArmStrongNumber(num,countDigits);//Calculate sum of digits raised to the power
    return sum==num;//Check if it matches the original number
}
// Let's Start here
int main(){
    int num;
    // Input from user 
    cout<<"\nEnter a number to check if it is an ArmStrong number : ";
    cin>>num;
    // Check and display result
    bool result=getIsArmStrong(num);
    if(result)
        cout<<num<<" is an ArmStrong number!";
    else
        cout<<num<<" is not an ArmStrong number!";
    return 0;
}