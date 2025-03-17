// Count Digits in a Number
#include<stdio.h>
// Function for count digits
int getCountDigits(int num){
    int count=0;
    // Handle negative numbers
    if(num<0)
        num=-num;
    // Count Digits
    while(num!=0){
        count++;
        num/=10;
    }
    return count;
}
// Let's Start here
void main(){
    int num;
    // Input the number
    printf("\nEnter an Integer : ");
    scanf("%d",&num);
    // Call the function  and display the result
    int digits=getCountDigits(num);
    printf("\nThe number of digits in %d is : %d\n",num,digits);
}