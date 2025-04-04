#include<iostream>
using namespace std;
// Recursion function to find HCF
int getHCF(int num1,int num2){
    if(num2==0){
        return num1;
    }
    return getHCF(num2,num1%num2); //  Recursion Step
}
// Let's Start here
int main(){
    int num1,num2;
    cout<<"\nEnter 1 number :";
    cin>>num1;
    cout<<"\nEnter 2 number : ";
    cin>>num2;
    int hcf=getHCF(num1,num2);
    cout<<"\nHCF of "<<num1<<" and "<<num2<<" is : "<<hcf<<endl;
    return 0;
}