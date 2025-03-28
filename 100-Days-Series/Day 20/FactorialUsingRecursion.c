#include<stdio.h>
// Method to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}
// Let's Start here
void main(){
    int num,fact;
    //Input a number
    printf("\nEnter a number : ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("\nFactorial of %d is : %d",num,fact);
}