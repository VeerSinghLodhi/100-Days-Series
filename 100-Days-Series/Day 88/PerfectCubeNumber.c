
#include<stdio.h>
// Function to find Perfect Cube Number between 1 to N
void getFindPerfectCube(int n){
    for(int i=1;i<=n;i++){
        int res=i*i*i;
        if(res>n){
            break;
        }
        printf("%d ",res);
    }
}
// Let's Start Here
void main(){
    int n;
    printf("\nEnter the value of N : ");
    scanf("%d",&n);
    printf("\nPerfect Cube Number between 1 to %d\n",n);
    getFindPerfectCube(n);
}