#include<iostream>
using namespace std;
// Function for MatrixTranspose
void getTransposseMatrix(int rows,int cols,int matrix[100][100],int transposeMatrix[100][100]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transposeMatrix[j][i]=matrix[i][j];
        }
    }
}
// Function to print matrix
void printMatrix(int rows, int cols, int matrix[100][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
// Let's Start here
int main(){
    cout<<"\n---------------------------";
    int rows,cols;
    cout<<"\nEnter Rows For Matirx : ";
    cin>>rows;
    cout<<"\nEnter Columns For Matrix : ";
    cin>>cols;
    int matrix[100][100];
    int transposeMatrix[100][100];
    cout<<"\nEnter Element for matrix : ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<"\nMatrix["<<i<<"]["<<j<<"] = ";
            cin>>matrix[i][j];
        }
    }
    cout<<"\nNormal Matrix"<<endl;
    printMatrix(rows,cols,matrix);
    cout<<"\nTranspose Matrix"<<endl;
    getTransposseMatrix(rows,cols,matrix,transposeMatrix);
    printMatrix(cols,rows,transposeMatrix);
    
    return 0;
}