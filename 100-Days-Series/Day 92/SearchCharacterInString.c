#include<stdio.h>
#include<string.h>
// Function to find character in a stirng
int getFindCharacter(char str[],char ch,int len){
    for(int i=0;i<len;i++){
        if(str[i]==ch){
            return i;
        }
    }
    return -1;
}
// Let's Start Here
void main(){
    char str[30],ch;
    printf("\nEnter a string : ");
    scanf("%s",&str);
    int len=strlen(str);
    printf("\nEnter character to find : ");
    fflush(stdin);
    scanf("%c",&ch);
    int res=getFindCharacter(str,ch,len);
    if(res!=-1){
        printf("\nFound at Index %d",res);
    }else{
        printf("\nNot Found!");
    }
}
