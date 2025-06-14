#include<stdio.h>
// Function to print Unique elements.
void getPrintUniqueElement(int arr[],int size){
    printf("\nUnique Elements : ");
    for(int i=0;i<size;i++){
        int isUnique=1;
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=0;
                break;
            }
        }
        if(isUnique==1){
            printf("%d ",arr[i]);
        }
    }
}
// Let's Start Here
void main(){
    int arr[]={4, 5, 6, 4, 7, 8, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\nArray : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    getPrintUniqueElement(arr,size);
}