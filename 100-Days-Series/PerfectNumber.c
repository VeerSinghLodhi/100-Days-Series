#include<stdio.h>
// Function to print Perfect Square Number between 1 to N
void getPrintSquare(int n){
    for(int i=1;i<=n;i++){
        int res = i*i;
        if(res>n)
            break;
        printf("%d ",res);
        
    }
}
// Let's Start Here
void main(){
    int n;
    printf("\nEnter the value of N : ");
    scanf("%d",&n);
    printf("\nPerfect Square Number between 1 to %d :\n",n);
    getPrintSquare(n);
}