#include<stdio.h>
// Recursion method to calculate power of a number
int getPower(int base,int exp){
    if(exp==0)
        return 1;// Base case: anything to the power of 0 is 1
    return base*getPower(base,exp-1);// Recursive step
}
// Recursion method to calculate the sum of digits raised to the power
int getArmStrongNumber(int num,int power){
    if(num==0){
        return 0;
    }
    int digit=num%10;// Get the last digit
    return getPower(digit,power)+getArmStrongNumber(num/10,power); // Recursive Step
}
// Method to check if a number is an ArmStrong number
int isArmStrong(int num){
    int countDigits=0,temp=num;
    while(temp!=0){// Calculate number of digits
        countDigits++;
        temp/=10;
    }
    int sum=getArmStrongNumber(num,countDigits);//Calculate sum of digits raised to the power
    return sum==num;//Check if it matches the original number
}
// Let's Start here
void main(){
    int num;
    // Input from user
    printf("\nEnter a number to check if it is an Armstrong number : ");
    scanf("%d",&num);
    // Check and display result
    int result=isArmStrong(num);
    if(result==1)
        printf("\n%d is an Armstrong number\n",num);
    else
        printf("\n%d is not an ArmStrong number\n",num);
}