#include<iostream>
#include<vector>
using namespace std;
// Function to print Unique elements.
void getPrintUniqueElement(vector<int>&arr){
    cout<<"\nUnique elements : ";
    for(int i=0;i<arr.size();i++){
        bool isUnique=true;
        for(int j=0;j<arr.size();j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            cout<<arr[i]<<" ";
        }
    }
}
// Let's Start Here
int main(){
    vector<int>arr={4, 5, 6, 4, 7, 8, 6};
    cout<<"\nArray : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    getPrintUniqueElement(arr);
}