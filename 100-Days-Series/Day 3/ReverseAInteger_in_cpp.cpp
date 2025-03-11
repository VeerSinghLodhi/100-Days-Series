#include<iostream>
using namespace std;
int getReverseInteger(int num){
    int reversed=0;
    while(num!=0){
        reversed=(reversed*10)+num%10;
        num/=10;
    }
    return reversed;
}
int main(){
    int num;
    cout<<"\nEnter a number : ";
    cin>>num;
    num=getReverseInteger(num);
    cout<<"\nReversed Integer is "<<num<<endl;
    return 0;
}