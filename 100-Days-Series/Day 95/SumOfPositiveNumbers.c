#include<stdio.h>
// Function to find the sum of positive numbers in the array.
int getSumOfPositiveNumbers(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            sum+=arr[i];
        }
    }
    return sum;
}
// Let's Start Here
void main(){
    int arr[]={-2, 3, 4, -1, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=getSumOfPositiveNumbers(arr,size);
    printf("\nSum of Positive numbers : %d\n\n",result);
}