// Least Comman Multiple(LCM)
#include<stdio.h>
// Function to calculate GCD using the Euclidean algorithm
int getGCD(int num1,int num2){
    while(num2!=0){
        int remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
    return num1;
}
// Function for calculate LCM
int getLCM(int num1,int num2){
    int gcd=getGCD(num1,num2);
    return num1*num2/gcd;
}
// Let's Start here 
int main(){
    int num1,num2;
    printf("\nEnter two Integers : ");
    scanf("%d%d",&num1,&num2);
    // Ensure the numbers age positive
    if(num1<0)
        num1=-num1;
    if(num2<0)
        num2=-num2;
    // Calculate LCM
    int lcm=getLCM(num1,num2);
    printf("\nLCM of %d and %d is : %d",num1,num2,lcm);
}