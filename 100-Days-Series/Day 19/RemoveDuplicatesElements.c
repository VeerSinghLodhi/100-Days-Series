#include<stdio.h>
void getRemoveDuplicatesElements(int arr[],int *size){
    int temp[*size];
    int i,j,index=0;
    for(i=0;i<*size;i++){
        for(j=0;j<index;j++){
            if(arr[i]==temp[j]){
                break;
            }
        }
        if(j==index)
            temp[index++]=arr[i];
    }
    // Copying unique elements back to the original array
    for(i=0;i<index;i++){
        arr[i]=temp[i];
    }
    *size=index;// Updating size to reflect unique elements
}
// Let's Start here 
void main(){
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; // An Array Created
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Call the function for remove duplicate elements
    getRemoveDuplicatesElements(arr, &n);
    // Print after removing duplicates elements
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}