#include<stdio.h>
// Function for Decimal to Binary conversion
long getDecimalToBinary(int decimal){
    long long binary = 0;
    int remainder,place=1;
    while(decimal!=0){
        remainder=decimal%2; // Get the last binary digit
        binary+=remainder*place; // Add it to the binary result
        decimal/=2;     // Divide the number by 2
        place*=10;      // Move to the next place value
    }
    return binary;
}
// Let's Start here
int main(){
    int decimal;
    printf("\nEnter Decimal number : ");
    scanf("%d",&decimal);
    long long binary=getDecimalToBinary(decimal);
    printf("Binary Equivalent : %lld",binary);
    printf("\n%d",1%2);
    return 0;
}// Note:   1 % 2 = 1;