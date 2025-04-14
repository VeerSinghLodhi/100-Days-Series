#include<iostream>
#include<string>
using namespace std;
// Functoion for remove spaces from a string 
void getRemoveSpaces(string &str){
    int j=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            str[j++]=str[i];
        }
    }
    str.erase(j);// Resize string to remove extra character0
}
// Let's Start here
int main(){
    string str;
    cout<<"\nEnter a string : ";
    getline(cin,str);
    cout<<"\nString with spaces : "<<str;
    getRemoveSpaces(str);
    cout<<"\nString withour spaces : "<<str;
    return 0;
}