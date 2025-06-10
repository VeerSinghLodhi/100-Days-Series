#include<iostream>
#include<vector>
using namespace std;
// Function to Replace Negative number with zero.
void getReplaceNegativeNumbetWithZero(vector<int>&arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        if(arr.at(i)<0){
            arr.at(i)=0;
        }
    }
}
// Function to print an array.
void getPrintArray(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    printf("\n");
}
// Let's Start Here
int main(){
    vector<int>arr={-1, 2, -3, 4, -5};
    cout<<"\nOriginal Array"<<endl;
    getPrintArray(arr);
    getReplaceNegativeNumbetWithZero(arr);
    cout<<"\nUpdated Array"<<endl;
    getPrintArray(arr);

}