#include<stdio.h>
// Normal function for calculate power of a number
int getPowerOfANumber(int base,int exp){ // base^exponent
    if(exp==0)
        return 1;
    int res=1;
    while(exp!=0){
        res*=base;
        exp--;   
    }
    return res;
}
// Recursion function for calculate power of a number.
int getPower(int base,int exp){// base^exponent
    if(exp==0)
        return 1;
    return base*getPower(base,exp-1);
}
// Let's Start here
void main(){
    int num,power;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    printf("\nEnter power : ");
    scanf("%d",&power);
    int res1=getPowerOfANumber(num,power);// Normal Function.
    int res2=getPower(num,power);       // Recursion Function.
    printf("\nNormal Function Result is %d",res1);
    printf("\nRecursion Function Result is %d",res2);
}