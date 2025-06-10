#include<stdio.h>
// Function to replace negative number with zero.
void getReplaceNegativeNumberWithZero(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            arr[i]=0;
        }
    }
}
// Function to print an array.
void getPrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// Let's Start Here
void main(){
    int arr[]={-1, 2, -3, 4, -5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nOriginal Array\n");
    getPrintArray(arr,size);
    getReplaceNegativeNumberWithZero(arr,size);
    printf("\nUpdated Array\n");
    getPrintArray(arr,size);
}