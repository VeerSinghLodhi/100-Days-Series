#include<stdio.h>
// Function to find Unique elements 
void getUnion(int arr1[],int size1,int arr2[],int size2){
    int uniArray[size1+size2];
    int k=0;
    for(int i=0;i<size1;i++){
        uniArray[k++]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        int isPresent=0;
        for(int j=0;j<k;j++){
            if(arr2[i]==uniArray[j]){
                isPresent=1;
                break;
            }
        }
        if(!isPresent){
            uniArray[k++]=arr2[i];
        }
    }
    printf("Union of arrays: \n");
    for(int i=0;i<k;i++){
        printf("%d ",uniArray[i]);
    }
}
// Let's Start here
void main(){
    int arr1[]={1,2,3,4,5,6,7};
    int arr2[]={5,1,6,10,9};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    getUnion(arr1,size1,arr2,size2);
}