#include<stdio.h>
// Let's Start here
void main(){ 
    int num1,num2;
    // Input two numbers
    printf("\nEnter 1 number : ");
    scanf("%d",&num1);
    printf("\nEnter 2 number : ");
    scanf("%d",&num2);
    printf("Before Swapping...");
    printf("\nA is %d \nB is %d",num1,num2);
    printf("\nAfter Swapping...");

    num1=(num1+num2)-(num2=num1);// Swapping Logic
    
    // Final Result
    printf("\nA is %d \nB is %d",num1,num2);

}