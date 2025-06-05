#include<iostream>
#include<vector>
using namespace std;
// Functiont for count Odd & Even.
void getCountEvenOdd(vector<int>&arr){
    int size=arr.size();
    int evenCount=0;
    int oddCount=0;
    for(int i=0;i<size;i++){
        if(arr.at(i)%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    cout<<"\nEven Numbers : "<<evenCount<<endl;
    cout<<"\nOdd Numbers : "<<oddCount<<endl;
}
// Let's Start Here
int main(){
    int sz;
    cout<<"\nEnter the size of the array : ";
    cin>>sz;
    vector<int>arr;
    cout<<"\nEnter the elements of the array :\n";
    for(int i=1;i<=sz;i++){
        cout<<"\nEnter "<<(i)<<" element : ";
        int val;
        cin>>val;
        arr.push_back(val);
    }
    getCountEvenOdd(arr);
}