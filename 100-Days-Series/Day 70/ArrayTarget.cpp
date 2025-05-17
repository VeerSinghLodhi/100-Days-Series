#include<iostream>
using namespace std;
// Function to find two numbers that add up to a specific target
void getFind(int arr[],int arrsize,int target){
    for(int i=0;i<arrsize;i++){
        for(int j=i+1;j<arrsize;j++){
            if(arr[i]+arr[j]==target){
                cout<<"\nIndices : "<<i<<", "<<j;
                return;
            }
        }
    }
    cout<<"\nNo Solution Found!";
}
// Let's Start Here
int main(){
    int arr[]={2,3,10,12};
    int target=14;
    int size=sizeof(arr)/sizeof(arr[0]);
    getFind(arr,size,target);
}