#include<iostream>
using namespace std;
// Function for Decimal to Binary conversion
long getDecimalToBinary(int decimal){
    int remainder,place=1;
    long binary=0;
    while(decimal!=0){
        remainder=decimal%2; // Get the last binary digit
        binary+=remainder*place;  // Add it to the binary result
        decimal/=2;         // Divide the number by 2
        place*=10;          // Move to the next place value
    }
    return binary;
}
// Let's Start here
int main(){
    int decimal;
    cout<<"\nEnter Decimal number :";
    cin>>decimal;
    long binary=getDecimalToBinary(decimal);
    cout<<"\nBinary Equivalnet is "<<binary<<endl;
    return 0;
}