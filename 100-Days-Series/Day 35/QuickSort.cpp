#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}
int getQuickSort(int arr[],int low,int high){
    if(low<high){
        int pivotIndex=partition(arr,low,high);
        getQuickSort(arr,low,pivotIndex-1);
        getQuickSort(arr,pivotIndex+1,high);
    }
}
void getPrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
}
// Let's Start here
int main(){
    int arr[]={3,2,4,5,1,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore Sorting..."<<endl;
    getPrintArray(arr,size);
    cout<<"\nAfter Quick Sorting..."<<endl;
    getQuickSort(arr,0,size-1);
    getPrintArray(arr,size);
}