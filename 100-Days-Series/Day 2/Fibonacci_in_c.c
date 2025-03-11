#include<stdio.h>
void main()
{
    int num,firstTerm=0,secondeTerm=1,nextTerm;
    printf("\nEnter Term of Series : ");
    scanf("%d",&num);
    printf("%d %d ",firstTerm,secondeTerm);
    for(int i=1;i<=num;i++)
    {
        nextTerm=firstTerm+secondeTerm;
        printf("%d ",nextTerm);
        firstTerm=secondeTerm;
        secondeTerm=nextTerm;
    }
}