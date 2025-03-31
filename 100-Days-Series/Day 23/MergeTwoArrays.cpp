#include<iostream>
#include<vector>
using namespace std;
// Function to merge two sorted arrays
vector<int> getMergeTwoArrays(int arr1[],int size1,int arr2[],int size2)
{
    int i=0,j=0,k=0;
    vector <int> mergedArray;
    // Traverse both arrays
    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            mergedArray.push_back(arr1[i++]);
        }else{
            mergedArray.push_back(arr2[j++]);
        }
    }
    // Store Remaining element of arr1
    while(i<size1){
        mergedArray.push_back(arr1[i++]);
    }
    // Store Remaining element of arr2
    while(j<size2){
        mergedArray.push_back(arr2[j++]);
    }
    return mergedArray;
}
// Let's Start here
int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> mergedArray=getMergeTwoArrays(arr1,size1,arr2,size2);
    // print the merged array
    // for each loop
    for(int num : mergedArray){
        cout<< num<< " ";
    }
    cout<<endl;

    return 0;
}