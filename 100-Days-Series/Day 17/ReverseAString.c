#include<stdio.h>
#include<string.h>
// Function to reverse a string.
void  getReverseString(char str[],char reversed[]){
    int size = strlen(str);
    int index=0;
    for(int i=size-1;i>=0;i--){
        reversed[index++]=str[i];
    }
    reversed[index] = '\0';
}
// Let's Start here
void main(){
    char string[100],reversed[100];

    // Input a String
    printf("\nEnter a String : ");
    scanf("%s",&string);

    printf("\nOriginal String : %s",string);
    // Call the reverse function
    getReverseString(string,reversed);

    printf("\nReversed String : %s",reversed);
}