#include<iostream>
using namespace std;
// Function for bubble sort
void getBubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];// Swapping without using 3rd variable
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
}
// Function for print an array
void getPrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
// Let's Start here
int main(){
    int arr[]={4,3,5,2,6,7,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore sorting.."<<endl;
    getPrintArray(arr,size);
    cout<<"\nAfter sorting.."<<endl;
    getBubbleSort(arr,size);;
    getPrintArray(arr,size);
    return 0;
}