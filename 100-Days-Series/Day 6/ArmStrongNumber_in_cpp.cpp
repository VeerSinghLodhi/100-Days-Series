#include<iostream>
using namespace std;
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
bool getIsArmStrongNumber(int num){
    int temp=num,sum=0,power=getCountDigit(num);
    while(num!=0){
        sum+=getPower(num%10,power);
        num/=10;
    }
    return temp==sum;
}
int main(){
    int num;
    cout<<"\nEnter a number : ";
    cin>>num;
    bool ans=getIsArmStrongNumber(num);
    if(ans)
        cout<<num<<" is a Arm Strong Number"<<endl;
    else
        cout<<num<<" is not a Arm Strong Number"<<endl;
    return 0;
}