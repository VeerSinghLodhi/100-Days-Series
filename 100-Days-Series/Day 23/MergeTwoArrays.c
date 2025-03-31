#include<stdio.h>
#include<stdlib.h>
// Function to merge two sorted arrays
void getMergeTwoArrays(int arr1[],int size1,int arr2[],int size2,int mergedArray[]){
    int i=0,j=0,k=0;
    // Traverse both arrays
    while(i<size1 &&  j<size2){
        if(arr1[i]<=arr2[j]){
            mergedArray[k++]=arr1[i++];
        }else{
            mergedArray[k++]=arr2[j++];
        }
    }
    // Store Remaining element of arr1
    while(i<size1){
        mergedArray[k++]=arr1[i++];
    }
    // Store Remaining element of arr2
    while(j<size2){
        mergedArray[k++]=arr2[j++];
    }
}
// Let's Start here
void main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    // Allocate memory for the merged array
    int *mergedArray=(int *)malloc((size1+size2)*sizeof(int));
    if(mergedArray==NULL){
        printf("\nCannot allocated memory!");
        return;
    }
    // Merge the arrays
    getMergeTwoArrays(arr1,size1,arr2,size2,mergedArray);
    // Print the merged array
    printf("\nMerged Array : ");
    for(int i=0;i<size1+size2;i++){
        printf("%d ",mergedArray[i]);
    }
    // Free allocated memory
    free(mergedArray);
}