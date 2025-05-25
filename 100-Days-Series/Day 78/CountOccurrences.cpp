#include<iostream>
#include<vector>
using namespace std;
// Function to count occurrences of a specific number in 2D array.
int getCountOccurrence(vector<vector<int>>&arr,int numberToSearch){
    int rows=arr.size();// Number of rows
    int cols=arr[0].size(); // Number of columns
    int count=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==numberToSearch){
                count++;
            }
        }
    }
    return count;
}
// Let's Start Here
int main(){
    vector<vector<int>>arr={
        {4, 7, 8},
        {8, 8, 7},
        {1, 7, 9}
    };
    int numberToSearch;
    cout<<"\nEnter number to search occurrences in the 2D array : ";
    cin>>numberToSearch;
    int count=getCountOccurrence(arr,numberToSearch);
    cout<<"\nThe number "<<numberToSearch<<" appears "<<count<<" times in the array."<<endl;
}