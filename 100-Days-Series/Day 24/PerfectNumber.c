#include<stdio.h>
// Function for check if number perfect number or not.
int getIsPerfectNumber(int num){
    if(num<=1){
        return 0;
    }
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0)
            sum+=i;
    }
    printf("%d",num);
    return sum==num;
}
// Let's Start here
void main(){
    int num;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    // Call the function and display result.
    int res=getIsPerfectNumber(num);
    if(res)
        printf("\n%d is a perfect number!",num);
    else
        printf("\n%d is not a perfect number!",num);
}