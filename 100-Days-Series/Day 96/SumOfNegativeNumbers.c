#include<stdio.h>
// Function to find the sum of negative numbers in the array.
int getSumOfNegativeNumbers(int arr[],int size){
    int sum=0,i=0;
    while(i!=size){
        if(arr[i]<0){
            sum+=arr[i];
        }
        i++;
    }
    return sum;
}
// Let's Start Here
void main(){
    int arr[]={-2, 3, 4, -1, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=getSumOfNegativeNumbers(arr,size);
    printf("\nSum of Negative Numbers : %d",result);
}

