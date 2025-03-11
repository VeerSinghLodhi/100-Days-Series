#include<stdio.h>
int getReverseInteger(int num){
    int reversed=0;
    while(num!=0)
    {
        reversed=(reversed*10)+num%10;
        num/=10;
    }
    return reversed;
}
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    num=getReverseInteger(num);
    printf("Reversed Integer is %d",num);
}