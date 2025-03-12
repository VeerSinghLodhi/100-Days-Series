#include<stdio.h>
int getCheckPrimeNumber(int num){
    int ans=1;
    if(num==1 || num==0)
        ans= 0;
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                ans=0;
                break;
            }
        }
    }
    return ans;
}
void main(){
    int num,res;
    printf("Enter a number : ");
    scanf("%d",&num);
    res=getCheckPrimeNumber(num);
    if(res==1)
        printf("%d is a Prime Number",num);
    else
        printf("%d is not a Prime Number",num);
}