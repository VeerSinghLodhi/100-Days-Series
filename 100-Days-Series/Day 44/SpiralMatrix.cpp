#include<iostream>
#include<vector>
using namespace std;
// Function to print matrix in spiral order
void getSpiralMatrix(vector<vector<int>>matrix){
    int top=0,bottom=matrix.size()-1;
    int left=0,right=matrix[0].size()-1;
    while(top<=bottom && left<=right){
        // traverse from left to right
        for(int col=left;col<=right;col++){
            cout<<matrix[top][col] <<" ";
        }
        top++;
        // traverse from top to bottom
        for(int row=top;row<=bottom;row++){
            cout<<matrix[row][right] <<" ";
        }
        right--;
        if(top<=bottom){
            // traverse from right to left
            for(int col=right;col>=left;col--){
                cout<<matrix[bottom][col]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            // traverse from bottom to top
            for(int row=bottom;row>=top;row--){
                cout<<matrix[row][left]<<" ";
            }
            left++;
        }
    }
}
// Let's Start here
int main(){
    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    getSpiralMatrix(matrix);
    return 0;
}