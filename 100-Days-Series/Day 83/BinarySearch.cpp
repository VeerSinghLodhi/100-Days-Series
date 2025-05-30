#include<iostream>
#include<vector>
using namespace std;
// Function for Bianry Search
int getBianrySearch(vector<int>&arr,int key){
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr.at(mid)==key){  // Check if key is present at mid
            return mid;  
        }else if(arr.at(mid)<key){  // If key greater, ignore left half
            left=mid+1;
        }else{
            right=mid-1;  // If key is smaller, ignore right half
        }
    }
    return -1;   // If we reach here, then element was not present
}
// Let's Start Here
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10}; // Sorted
    int key=10; // Value to Search
    int res=getBianrySearch(arr,key);
    if(res!=-1){
        cout<<"\nFound at "<<res<<endl;
    }else{
        cout<<"\nNot Found!!"<<endl;
    }
}