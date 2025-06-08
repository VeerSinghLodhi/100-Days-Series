#include<iostream>
#include<string>
using namespace std;
// Function to find character in a string
int getFindCharacter(string str,char ch){

    for(int i=0;i<str.length();i++){
        if(str[i]==ch){
            return i;
        }
    }
    return -1;
}
// Let's Start Here
int main(){
    string str;
    cout<<"\nEnter a string : ";
    getline(cin,str);
    cout<<"\nEnter Character to find : ";
    char ch;
    cin>>ch;
    int res=getFindCharacter(str,ch);
    if(res!=-1){
        cout<<"\nFound at "<<res<<endl;
    }else{
        cout<<"\nNot Found"<<endl;
    }
}
