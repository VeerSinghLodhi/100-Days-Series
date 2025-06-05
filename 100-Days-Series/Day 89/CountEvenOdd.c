#include<stdio.h>
// Function for count Even & Odd 
void getCountEvenOdd(int arr[],int size){
    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    printf("\nEven Numbers : %d",evenCount);
    printf("\nOdd Numbers : %d",oddCount);
}
// Let's Start Here
void main(){
    int size;
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the array :\n");
    for(int i=0;i<size;i++){
        printf("\nEnter %d element : ",(i+1));
        scanf("%d",&arr[i]);
    }
    getCountEvenOdd(arr,size);
}