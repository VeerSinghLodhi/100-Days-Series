#include<iostream>
using namespace std;
int getCheckPrimeNumber(int num){
    int ans=1;
    if(num==1 || num==0)
        ans=0;
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                ans=0;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int num,ans;
    cout<<"\nEnter a number : ";
    cin>>num;
    ans=getCheckPrimeNumber(num);
    if(ans==1)
        cout<<num<<" is a Prime Number";
    else
        cout<<num<<" is not a Prime Number";
    return 0;
}