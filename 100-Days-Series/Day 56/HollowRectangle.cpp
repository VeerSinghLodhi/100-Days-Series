#include<iostream>
using namespace std;
// function to print hollow rectangle pattern
void getHollowRectangle(int rows,int cols){
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(i==1 || rows==i || j==1 || cols==j){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
// Let's Start Here
int main(){
    int rows,cols;
    cout<<"\nEnter the number of rows : ";
    cin>>rows;
    cout<<"\nEnter the number of columns : ";
    cin>>cols;
    getHollowRectangle(rows,cols);
    return 0;
}