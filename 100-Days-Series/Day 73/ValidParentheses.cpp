#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool isMatchingPair(char open,char close){
    return (open=='(' && close==')') ||
        (open=='[' && close==']')  ||
        (open=='{' && close=='}');
}
bool isValidParentheses(string str){
    stack<char> s;
    for(char ch: str){
        if(ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }else if(ch==')' || ch==']' || ch=='}'){
            if(s.empty() || !isMatchingPair(s.top(),ch))
                return false;
            s.pop();
        }
    }
    return s.empty();
}

// Let's Start Here
int main(){
    string str="()[]{}"; // True
    bool ans=isValidParentheses(str);
    if(ans){
        cout<<"\nValid Parentheses"<<endl;
    }else{
        cout<<"\nInvalid Parentheses"<<endl;
    }
}