#include<stdio.h>
// Function for Binary search
int getBinarySearch(int arr[],int size,int key){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==key){
            return mid;  // Check if key is present at mid
        }
        else if(arr[mid]<key){  // If key greater, ignore left half
            left=mid+1;
        }else{
            right=mid-1; // If key is smaller, ignore right half
        }
    }
    return -1; // If we reach here, then element was not present
}
void main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};// Sorted Array.
    int key=5; // Value to search.
    int size=sizeof(arr)/sizeof(arr[0]);
    int res=getBinarySearch(arr,size,key);
    if(res!=(-1)){
        printf("\nFound at %d",res);
    }else{
        printf("\nNot Found!!");
    }
}