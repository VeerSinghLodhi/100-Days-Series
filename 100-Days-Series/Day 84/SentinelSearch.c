#include<stdio.h>
// Funtion for Sentinel Search Algorithm
int getSentinelSearch(int arr[],int size,int key){
    int last=arr[size-1];
    arr[size-1]=key;
    int i=0;
    while(arr[i]!=key){
        ++i;
    }
    arr[size-1]=last;
    if((i<size-1) || (arr[size-1]==key))
        return i;
    else 
        return -1;
}
// Let's Start Here
void main(){
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=40;
    int res=getSentinelSearch(arr,size,key);
    if(res!=-1){
        printf("\nFount at %d",res);
    }else{
        printf("\nNot Found!!");
    }
}