#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>// For using the bool type (true/false)
// Function to check if a sentence is a pangram
bool  isPangram(const char *sentence){
    char letters[26]={0};// Array to track presence of each letter (a-z)
    int count=0;
    // Traverse each character of the sentence
    for(int i=0;sentence[i]!='\0';i++){
        if(isalpha(sentence[i])){ // Check if character is a letter
            int index=tolower(sentence[i])-'a';// Convert to lowercase and map to index 0-25
            if(!letters[index]){// If letter not already counted
                letters[index]=1;// Mark letter as found
                count++;// Increment count of unique letters
            }
        }
    }
    return count==26;// Return true if all 26 letters were found
}
// Let's Start here
void main(){
    char sentence[]="The quick brown fox jumps over the lazy dog";
    if(isPangram(sentence)){
        printf("\nThis sentence is a Pangram!");
    }else{
        printf("\nThis sentence is not a Pangram!");
    }

}