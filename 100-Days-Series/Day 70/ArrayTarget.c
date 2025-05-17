#include<stdio.h>
// Function to find two numbers that add up to a specific target.
void getFind(int arr[],int arrsize,int target){
    for(int i=0;i<arrsize;i++){
        for(int j=i+1;j<arrsize;j++){
            if(arr[i]+arr[j]==target){
                printf("\nIndices: %d, %d",i,j);
                return;
            }
        }
    }
    printf("\nNo Solution found!");
}
// Let's Start Here
void main(){
    int arr[]={2,7,11,15};
    int target=9;
    int size=sizeof(arr)/sizeof(arr[0]);
    getFind(arr,size,target);
}