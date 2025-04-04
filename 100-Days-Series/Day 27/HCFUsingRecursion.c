#include<stdio.h>
// Recursive function to find HCF
int getHCF(int num1,int num2){
    if(num2==0){
        return num1;
    }
    return getHCF(num2,num1%num2); // Recursion step
}
// Let's Start here
void main(){
    int num1,num2;
    printf("\nEnter 1 number : ");
    scanf("%d",&num1);
    printf("\nEnter 2 number : ");
    scanf("%d",&num2);
    int hcf=getHCF(num1,num2);
    printf("\nHCF of %d and %d is : %d",num1,num2,hcf);
}