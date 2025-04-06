#include<stdio.h>
#include<string.h>
#include<ctype.h>
// Let's Start here
void main(){
    char sentence[1000];
    int count=0,inWord=0;
    printf("\nEnter a sentence : ");
    fgets(sentence,sizeof(sentence),stdin);
    //fgets--> file get string
    //sentence	The character array where the input will be stored.
    //sizeof(sentence)	The maximum number of characters to read (including \0).
    //stdin	Stands for standard input (usually your keyboard).
    for(int i=0;sentence[i]!='\0';i++){// '\0' means null character.
        if(isspace(sentence[i])){
            inWord=0;
        }else if(!inWord){
            inWord=1;
            count++;
        }
    }
    printf("The number of words in the sentence is : %d",count);
}