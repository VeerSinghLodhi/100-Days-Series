#include<stdio.h>
 // Function to calculate factorial
int factorial(int n){
    if(n==1 || n==0)
        return 1;
    return n*factorial(n-1);
}
// Function to calculate the nth Catalan number
int getCatalan(int n){
    return factorial(n*2)/(factorial(n+1)*factorial(n));
}
// Let's Start Here
void main(){
    int n;
    printf("\nEnter the number of term (N) : ");
    scanf("%d",&n);
    printf("\nCatalan Numbers up to %d terms : ",n);
    for(int i=0;i<n;i++){
        printf("%d ",getCatalan(i));
    }
}