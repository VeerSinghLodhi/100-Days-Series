#include<iostream>
using namespace std;
// Function to find a number in a particular range.
int getFindNumberInRange(int arr[],int sr,int er,int size,int number){
    if(sr<0 || er>=size || sr>er){
        return -1;
    }
    for(int i=sr;i<=er;i++){
        if(arr[i]==number){
            return i;
        }
    }
    return -1;
}
// Let's Start Here
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sr=4;
    int er=8;
    int numberToFind=6;
    int res=getFindNumberInRange(arr,sr,er,size,numberToFind);
    if(res!=-1){
        cout<<"\nFound at Index "<<res<<endl;
    }else{
        cout<<"\nNot Found!!"<<endl;    
    }
}