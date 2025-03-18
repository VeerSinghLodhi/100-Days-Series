#include<stdio.h>
// Function for Calculate the sum of digits
int getSumOfDigits(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10; // Get the last digit
        num/=10;     // Remove the last digit
    }
    return sum;
}
//Let's Start here 
void main(){
    int num;
    // Input the number
    printf("\nEnter an Integer : ");
    scanf("%d",&num);
    // Call the function and display the result
    int totalSum=getSumOfDigits(num);
    printf("\nSum of digits is : %d",totalSum);
}