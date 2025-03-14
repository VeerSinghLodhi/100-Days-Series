#include<stdio.h>
int getCountDigit(int num){
    int count=0;
    while(num!=0){
        count++;
        num/=10;
    }
    return count;
}
int getPower(int num,int power){
    int res=1;
    while(power>0){
        res*=num;
        power--;
    }
    return res;
}
int getIsArmStrongNumber(int num){
    int temp=num,sum=0;
    int power=getCountDigit(num);
    while(num!=0){
        sum+=getPower(num%10,power);
        num/=10;
    }
    return temp==sum;
}
void main(){
    int num,ans;
    printf("\nEnter a number : ");
    scanf("%d",&num);
    ans=getIsArmStrongNumber(num);
    if(ans)
        printf("%d is a Arm Strong Number",num);
    else
        printf("%d is not a Arm Strong Number",num);
}