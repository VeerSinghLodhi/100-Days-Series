#include<iostream>
#include<string>
using namespace std;
// Array to map digits to their English words
string words[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
// Recursive function to convert number to words.
void getConvertNumberToWords(int number){
    // Base Case : if the number is 0, stop recursion
    if(number==0){
        return;
    }
    getConvertNumberToWords(number/10);
    cout<<words[number%10]<<" ";
}
// Let's Start Here
int main(){
    int number;
    cout<<"\nEnter a number : ";
    cin>>number;
    if(number==0){
        cout<<"\nZero"<<endl;
    }else{
        getConvertNumberToWords(number);
    }
}