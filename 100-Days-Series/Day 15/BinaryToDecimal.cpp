#include<iostream>
using namespace std;
// Function for Binary to Decimal Conversion
int getBinaryToDecimal(long binary){
    int decimal=0,base=1;
    while(binary!=0){
        int remainder=binary%10;//  Extract the last digit
        decimal+=remainder*base; // Multiply with  the current base
        base*=2;            // Update the base (2^i)
        binary/=10;        //  Remove the last digit
    }
    return  decimal;
}
// Let's Start here
int main(){
    long binary;
    cout<<"\nEnter a binary number : ";
    cin>>binary;
    int decimal=getBinaryToDecimal(binary);
    cout<<"\nThe decimal equivalent is :"<<decimal<<endl;
}