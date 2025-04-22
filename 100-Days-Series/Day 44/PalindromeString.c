#include<stdio.h>
#include<string.h>
// Function to check if string is a palindrome or not.
int getCheckPalindrome(char str[]){
    int start=0;
    int end=strlen(str)-1;
    while(start<end){
        if(str[start]!=str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}
//Let's Start here
void main(){
    char str[40];
    printf("\nEnter a string : ");
    scanf("%s",&str);
    if(getCheckPalindrome(str))
        printf("\nThe string %s is a Palindrome",str);
    else
        printf("\nThe string %s is not a Palindrome");
}