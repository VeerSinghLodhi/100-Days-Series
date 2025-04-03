#include<stdio.h>
// Recursion method fo find sum of first n natural numbers.
int getSum(int num){
    if(num==1){
        return 1;// Base case
    }
    return num+getSum(num-1); // Recursion step
}
// Let's Start here
void main(){
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    // Call the function and display result
    printf("\nSum of first %d natural numbers : %d",num,getSum(num));
}