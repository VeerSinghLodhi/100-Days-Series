#include<iostream>
#include<string> // For using the string class
#include<sstream>// For using stringstream to  split the sentence
using namespace std;
// Let's Start here
int main(){
    string sentence;
    cout<<"\nEnter a sentence : ";
    getline(cin,sentence); // Read the entire line including spaces
    // Create a stringstream object to break the sentence into words
    stringstream ss(sentence);

    string words;
    int count=0;
    // Extract words one by one from stringstram
    while(ss>>words){
        count++;  // Increase the count for each word
    }
    cout<<"\nThe number of words in  the sentence is : "<<count<<endl;
    return 0;
}