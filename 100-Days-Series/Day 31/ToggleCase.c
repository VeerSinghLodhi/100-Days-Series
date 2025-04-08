#include<stdio.h>
#include<ctype.h>
#include<string.h>
// Method for ToggleCase
void getToggleCase(char *str){
    while(*str){
        if(isupper(*str)){
            *str=tolower(*str);
        }else if(islower(*str)){
            *str=toupper(*str);
        }
        str++;// Move to the next character
    }
}
// Let's Start here
void main(){
    char str[]="Hello, World!";
    printf("\nOriginal String : %s",str);
    getToggleCase(str);
    printf("\nToggled String : %s",str);

}