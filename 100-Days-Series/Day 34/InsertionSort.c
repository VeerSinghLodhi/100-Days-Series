#include<stdio.h>
// Function for Insertion Sort
void getInsertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void getPrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
// Let's Start here
void main(){
    int arr[]={3,4,2,5,1,7,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nBefore Sorting..\n");
    getPrintArray(arr,size);
    getInsertionSort(arr,size);
    printf("\nAfter Insertion Sorting...\n");
    getPrintArray(arr,size);
}