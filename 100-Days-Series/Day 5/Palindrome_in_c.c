#include<stdio.h>
int getCheckPalindromeNumber(int num){
    int n=num,reversed=0;
    while(num!=0){
        reversed=(reversed*10)+num%10;
        num/=10;
    }
    if(reversed==n)
        return 1;
    else
        return 0;
}
void main()
{
    int num,ans;
    printf("Enter a number :");
    scanf("%d",&num);
    ans=getCheckPalindromeNumber(num);
    if(ans==1)
        printf("%d is a Palindrome Number",num);
    else
        printf("%d is not a Palindrome Number",num);
}