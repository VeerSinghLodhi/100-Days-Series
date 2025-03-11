#include<iostream>
using namespace std;
int main(){
    int num,firstTerm=0,secondTerm=1,nextTerm;
    cout<<"\nEnter Term of Series : ";
    cin>>num;
    cout<<" "<<firstTerm<<" "<<secondTerm;
    for(int i=0;i<num;i++)
    {
        nextTerm=firstTerm+secondTerm;
        cout<<" "<<nextTerm;
        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }
}