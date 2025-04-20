#include<iostream>
#include<vector>
using namespace std;
// Function to rotate a matrix by 90 degrees clockwise
void getRotate(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        int left=0,right=n-1;
        while(left<right){
            swap(matrix[i][left],matrix[i][right]);
            left++;
            right--;
        }
    }
}
// Function to print matrix
void getPrintMatrix(const vector<vector<int>> matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix.size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
// Let's Start here
int main(){
    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<<"\nOriginal Matrix :"<<endl;
    getPrintMatrix(matrix);
    cout<<"\nRotated Matrx : "<<endl;
    getRotate(matrix);
    getPrintMatrix(matrix);


    return 0;
}