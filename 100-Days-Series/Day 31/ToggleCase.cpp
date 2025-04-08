#include<iostream>
#include<cctype>
#include<string>
using namespace std;
string getToggleCase(string &str){
    string result=str;
    for(char& ch:result){
        if(isupper(ch)){
            ch=tolower(ch);
        }else if(islower(ch)){
            ch=toupper(ch);
        }
    }
    return result;
}
// Let's Start here
int main(){
    string str="Hello, World!";
    cout<<"\nOriginal String : "<<str<<endl;
    string toggledString=getToggleCase(str);
    cout<<"\nToggled String : "<<toggledString<<endl;
    return 0;
}