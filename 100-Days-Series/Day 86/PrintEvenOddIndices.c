#include<stdio.h>
// Function to print Even Indices
void getPrintEvenIndices(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
    }
}
// Function to print Odd Indices
void getPrintOddIndices(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i%2!=0){
            printf("%d ",arr[i]);
        }
    }
}
// Let's Start Here
void main(){
    int arr[]={5,4,6,3,7,2,8,1,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nEven Indices Printing..\n");
    getPrintEvenIndices(arr,size);
    printf("\nOdd Indices Printing..\n");
    getPrintOddIndices(arr,size);
}