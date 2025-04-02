#include<iostream>
using namespace std;
// Normal Function to calculate power of a number.
int getPowerOfANumber(int base,int exp){// base^exponent
    if(exp==0)
        return 1;
    int res=1;
    while(exp!=0){
        res*=base;// 1*5=5  5*5=25  25
        exp--;
    }
    return res;// Return the final result.
}
// Recursion Function to calculate power of a number.
int getPower(int base,int exp){
    if(exp==0)
        return 1;
    return base*getPower(base,--exp); // Recurive step
}
// Let's Start here
int main(){
    int num,power;
    cout<<"\nEnter a number : ";
    cin>>num;
    cout<<"\nEnter power : ";
    cin>>power;
    int res1=getPowerOfANumber(num,power);// Normal function
    int res2=getPower(num,power);       // Recursion function
    cout<<"\nNormal function result is "<<res1;
    cout<<"\nRecursion function result is "<<res2;
    return 0;
}