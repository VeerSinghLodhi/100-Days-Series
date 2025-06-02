#include<iostream>
using namespace std;
// Function to print Even Indices
void getPrintEvenIndices(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
    }
}
// Function to print Odd Indices
void getPrintOddIndices(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i%2!=0){
            printf("%d ",arr[i]);
        }
    }
}
// Let's Start Here
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nEven Indices Printing.."<<endl;
    getPrintEvenIndices(arr,size);
    cout<<"\nOdd Indicec Printing.."<<endl;
    getPrintOddIndices(arr,size);
}