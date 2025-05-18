#include<iostream>
#include<vector>
using namespace std;
// Function to search for a target in the matrix.
bool getFindTarget(vector<vector<int>>&matrix,int target){
    int rows=matrix.size();
    int cols=matrix[0].size();
    int left=0,right=rows*cols-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        int midValue=matrix[mid/cols][mid%rows];
        if(midValue==target){
            return true;
        }else if(midValue<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return  false;
}
// Let's Start Here
int main(){
    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int target=6;
    bool res=getFindTarget(matrix,target);
    if(res)
        cout<<"\nTarget "<<target<<" exists in the matrix."<<endl;
    else
        cout<<"\nTarget "<<target<<" does not exist in the matrix."<<endl;

    return 0;
}