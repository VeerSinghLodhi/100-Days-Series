#include<stdio.h>
#include<string.h>
// Function for count Vowels
int getCountVowels(char str[]){
    int countVowels=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            countVowels++;
        }
    }
    return countVowels;
}
// Function for count Consonants
int getCountConsnants(char str[]){
    int countConsonants=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        char ch=str[i];
        if(!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
            countConsonants++;
        }
    }
    return countConsonants;
}
// Let's Start here
void main(){
    char str[100];
    printf("\nEnter a string : ");
    scanf("%s",&str);
    printf("\nString is %s",str);
    int totalVowels,totalConsonants;
    totalVowels=getCountVowels(str);
    totalConsonants=getCountConsnants(str);
    printf("\nIn this String.......");
    printf("\nTotal vowels are %d",totalVowels);
    printf("\nTotal Consonants are : %d",totalConsonants);
}