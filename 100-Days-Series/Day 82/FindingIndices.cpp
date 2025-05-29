#include<iostream>
#include<vector>
using namespace std;
// Function to find all occurrences of a key in the array
void findOccurrence(vector<int>&arr,int key,int index){
    // Base case: if the current index reaches the size of the array, stop recursion
    int size=arr.size();
    if(size==index){
        return;
    }
    // If the current element matches the key, print its index
    if(arr.at(index)==key){
        cout<<index<<" ";
    }
    // Recursive call to check the next element
    findOccurrence(arr,key,++index);
}
// Let's Start Here
int main(){
    vector<int>arr={3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key=2;
    findOccurrence(arr,key,0);
    cout<<endl;
}