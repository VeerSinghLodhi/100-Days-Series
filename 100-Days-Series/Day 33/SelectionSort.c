#include<stdio.h>
// Function for SelectionSort
void getSelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
}
void getPrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
// Let's Start here
void main(){
    int arr[]={3,2,5,6,7,1,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nBefore Sorting...\n");
    getPrintArray(arr,size);
    printf("\nAfter Selection Sorting...\n");
    getSelectionSort(arr,size);
    getPrintArray(arr,size);
    
}