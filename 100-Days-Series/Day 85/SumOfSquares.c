#include<stdio.h>
// Let's Start Here
void main(){
    int n;
    // Input : value of N
    printf("\nEnter  the value of N : ");
    scanf("%d",&n);

    // Formula to calculate the sum of squares
    int sum = ( n * ( n + 1 ) * ( 2 * n + 1 ) ) / 6;

    // Output : sum of the series
    printf("\nSum of the series : %d",sum);

}