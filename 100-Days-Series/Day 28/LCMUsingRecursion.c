#include<stdio.h>
// Recursion function to find GCD
int getGCd(int num1,int num2){
    if(num2==0)
        return num1;
    return getGCd(num2,num1%num2);
}
// Method to find LCM using the recursion GCD.
int getLCM(int num1,int num2){
    return (num1*num2)/getGCd(num1,num2);
}

// Let's Start here
void main(){
    int num1,num2;
    printf("\nEnter 1 number : ");
    scanf("%d",&num1);
    printf("\nEnter 2 number : ");
    scanf("%d",&num2);
    int lcm=getLCM(num1,num2);
    printf("\nLCM of %d and %d is : %d\n",num1,num2,lcm);
}