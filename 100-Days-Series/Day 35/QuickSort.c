#include<stdio.h>
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}
// Function for Quick Sort
void getQuickSort(int arr[],int low,int high){
    if(low<high){
        int pivotIndex=partition(arr,low,high);
        getQuickSort(arr,low,pivotIndex-1);
        getQuickSort(arr,pivotIndex+1,high);
    }
}
void getPrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
// Let's Start here
void main(){
    int arr[]={4,3,5,2,6,1,7,9,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nBefore Sorting..\n");
    getPrintArray(arr,size);
    printf("\nAfter Quick Sorting..\n");
    getQuickSort(arr,0,size-1);
    getPrintArray(arr,size);
}