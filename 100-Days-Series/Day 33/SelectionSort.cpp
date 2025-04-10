#include<iostream>
using namespace std;
// Function for SelectionSort
void getSelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];  // Swapping
        arr[i]=temp;
    }
}
void getPrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
// Let's Start here
int main(){
    int arr[]={5,6,4,3,7,8,9,1,10,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore Sorting.."<<endl;
    getPrintArray(arr,size);
    cout<<"\nAfter Selection Sorting.."<<endl;
    getSelectionSort(arr,size);
    getPrintArray(arr,size);
    return 0;
}