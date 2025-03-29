#include<stdio.h>
   // Recursive method to calculate Fibonacci numbers
int getFabonacci(int num){
    if(num<=1)
        return num;// Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    else
        return getFabonacci(num-1)+getFabonacci(num-2);// Recursive call
}
void main(){
    int num;
    // Number of terms in the Fibonacci series
    printf("\nEnter series terms : ");
    scanf("%d",&num);
    printf("Fibonacci series up to %d terms:",num);
    for(int i=0;i<num;i++){
        printf("%d " ,getFabonacci(i));
    }
}