#include<iostream>
#include<string>
using namespace std;
// Fucntion to check if string is a Palindrome or not
bool getCheckPalindrome(string str){
    int start=0;
    int end=str.length()-1;
    while(start<end){
        if(str[start]!=str[end])
            return false;
        start++;
        end--;
    }
    return 1;

}
// Let's Start here
int main(){
    string str;
    cout<<"\nEnter a String : ";
    cin>>str;
    if(getCheckPalindrome(str))
        cout<<"\nThe String "<<str<<" is a Palindrome!"<<endl;
    else
        cout<<"\nThis String "<<str<<" is not a Palidrome!"<<endl;

    return 0;
}