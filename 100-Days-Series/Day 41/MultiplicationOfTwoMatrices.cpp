#include<iostream>
using namespace std;
// Function for matrix multiplication
void matrixMultiplication(int rowsA,int colsA,int colsB){
    int a[rowsA][colsA], b[colsA][colsB], c[rowsA][colsB];
    // Input for matrix A
    cout<<"\nEnter elements for matrix A ("<<rowsA<<"x"<<colsA<<")"<<endl;
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsA;j++){
            cout<<"A["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }
    // Input for matrix B
    cout<<"Enter element for matrix B ("<<colsA<<"x"<<colsB<<")"<<endl;
    for(int i=0;i<colsA;i++){
        for(int j=0;j<colsB;j++){
            cout<<"B["<<i<<"]["<<j<<"] : ";
            cin>>b[i][j];
        }
    }

    // Initializing Matrix C to zero
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            c[i][j]=0;
        }
    }
    // Performing Matrix Multiplication
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            for(int k=0;k<colsA;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    // Printing the Resultant Matrix
    cout<<"Resultant Matrix C ("<<rowsA<<"x"<<colsB<<") : "<<endl;
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsB;j++){
            cout<<"C["<<i<<"]["<<j<<"] = "<<c[i][j]<<", ";
        }
        cout<<endl;
    }
}

// Let's Start here
int main(){
    int rowsA,colsA,colsB;
    cout<<"\n----For Matrix A----";
    cout<<"\nEnter Rows : ";
    cin>>rowsA;
    cout<<"\nEnter Columns : ";
    cin>>colsA;
    cout<<"\n----For Matrix B----";
    cout<<"\nEnter Columns (rows automatically "<<rowsA<<"): ";
    cin>>colsB;
    // Call function to perform multiplication
    matrixMultiplication(rowsA,colsA,colsB);

    return 0;
}