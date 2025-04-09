#include<stdio.h>
// Function for Bubble sort
void getBubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
// Function for print an array
void getPrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
// Let's Start here
void main(){
    int arr[]={4,3,5,2,6,7,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);// Array Size
    printf("\nBefore Sorting..\n");
    getPrintArray(arr,size);
    printf("\nAfter Bubble sorting..\n");
    getBubbleSort(arr,size);
    getPrintArray(arr,size);
}