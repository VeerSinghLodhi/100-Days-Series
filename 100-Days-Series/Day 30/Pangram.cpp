#include<iostream>
#include<string>
#include<cctype>
#include<unordered_set>
using namespace std;
// Function to check if a sentence is a pangram
bool isPangram(string sentence){
    unordered_set<char> letters;
    for(char ch:sentence){
        if(isalpha(ch)){
            letters.insert(tolower(ch));
        }
    }
    return letters.size()==26;
}
// Let's Start here
int main(){
    string sentence="The quick brown fox jumps over the lazy dog";
    if(isPangram(sentence)){
        cout<<"\nThis sentence is a Pangram"<<endl;
    }else{
        cout<<"\nThis sentence is not a Pangram"<<endl;
    }
}