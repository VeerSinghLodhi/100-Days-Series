#include<iostream>
using namespace std;
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
        cout<<arr[i]<<" ";
    }
}
// Let's Start here
int main(){
    int arr[]={3,2,1,6,8,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore Sorting..."<<endl;
    getPrintArray(arr,size);
    getInsertionSort(arr,size);
    cout<<"\nAfter Insertion Sorting..."<<endl;
    getPrintArray(arr,size);
    return 0;
}