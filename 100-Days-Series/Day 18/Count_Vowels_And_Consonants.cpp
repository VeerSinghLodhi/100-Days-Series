#include<iostream>
#include<string>
using namespace std;
// Function for count Vowels
int getCountVowels(string str){
    int countVowels=0;
    int len=str.length();
    for(int i=0;i<len;i++){
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            countVowels++;
        }
    }
    return countVowels;
}
// Function for count Consonants
int getCountConsnants(string str){
    int countConsonants=0;
    int len=str.length();
    for(int i=0;i<len;i++){
        char ch=str[i];
        if(!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
            countConsonants++;
        }
    }
    return countConsonants;
}
// Let's Start here
int main(){
    string str;
    cout<<"\nEnter a String : ";
    cin>>str;
    cout<<"\n'"<<str<<"' in this String...";
    int totalVowels,totalConsonants;
    totalVowels=getCountVowels(str);
    totalConsonants=getCountConsnants(str);
    cout<<"\nTotal Vowels are : "<<totalVowels;
    cout<<"\nTotal Consonants are : "<<totalConsonants;
    }