#include<stdio.h>
// Array to map digits to their English words
const char  *words[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
// Recursive function to convert number to words.
void convertNumberToWords(int number){
     // Base case: if the number is 0, stop recursion
    if (number == 0) {
        return;
    }
    convertNumberToWords(number/10); 
    printf("%s ",words[number%10]);
}
// Let's Start Here
void main(){
    int number;
    printf("\nEnter a number : ");
    scanf("%d",&number);
    if(number==0){
        printf("\nZero");
    }else{
        convertNumberToWords(number);
    }
}