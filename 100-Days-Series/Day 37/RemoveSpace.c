#include<stdio.h>
#include<string.h>
// Function for remove spaces from a string
void getRemoveSpaces(char *str){
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j++]=str[i];
        }
    }
    str[j]='\0';// Null terminate the modified string;
}
// Let's Start here 
void main(){
    char str[100];
    printf("\nEnter a string : ");
    fgets(str,sizeof(str),stdin);
    printf("\nString with Spaces : %s",str);
    str[strcspn(str,"\n")]='\0';// Remove the trailing newline
    getRemoveSpaces(str);
    printf("\nString without Spaces : %s",str);
}