#include<iostream>
#include<vector>
using namespace std;
// Function to check if an array is a palindrome.
bool getCheckPalindromeArray(vector<int>&arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        if(arr.at(start)!=arr.at(end)){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
// Let's Start Here
int main(){
    vector<int>arr={1, 2, 3, 2, 1};
    cout<<"\nArray : ";
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    bool result=getCheckPalindromeArray(arr);
    if(result){
        cout<<"\nThe array is a Palindrome."<<endl;
    }else{
        cout<<"\nThe array is not a Palindrome."<<endl;
    }
    return 0;
}