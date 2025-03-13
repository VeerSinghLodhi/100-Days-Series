#include<iostream>
using namespace std;
bool getCheckPalindromeNumber(int num){
    int n=num,reversed=0;
    while(num!=0){
        reversed=(reversed*10)+num%10;
        num/=10;
    }
    return n==reversed;
}
int main(){
    int num;
    bool ans;
    cout<<"\nEnter a number : ";
    cin>>num;
    ans=getCheckPalindromeNumber(num);
    if(ans==true)
        cout<<num<<" is a Palindrome Number"<<endl;
    else 
        cout<<num<<" is not a Palindrome Number"<<endl;
}