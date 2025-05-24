#include<iostream>
#include<vector>
using namespace std;
// Function to chekc if the array has dupliacate values
bool getCheck(vector<int>arr){
    int size=arr.size();
    // Bubble Sort
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // Check for duplicates in the sorted array
    for(int i=0;i<size-1;i++){
        if(arr[i]==arr[i+1])
        return true;
    }
    return false;

}
// Let's Start Here
int main(){
    vector<int>arr1={1, 2, 3, 1};
    vector<int>arr2={1, 2, 3, 4};
    vector<int>arr3={1, 1, 1, 3, 3, 4, 2, 4, 2};
    bool result1=getCheck(arr1);
    bool result2=getCheck(arr2);
    bool result3=getCheck(arr3);
    cout<<"\nReuslt 1 : "<<result1<<endl;
    cout<<"\nResult 2 : "<<result2<<endl;
    cout<<"\nResult 3 : "<<result3<<endl;
}