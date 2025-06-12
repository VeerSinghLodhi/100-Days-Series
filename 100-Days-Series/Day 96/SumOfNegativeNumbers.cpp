
#include<iostream>
#include<vector>
using namespace std;
// Function to find the sum of negative numbers in the array.
int getSumOfNegativeNumber(vector<int>&arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0){
            sum+=arr[i];
        }
    }
    return sum;
}
// Let's Start Here
int main(){
    vector<int>arr={5,4,-1,-4,6,-8};
    int result=getSumOfNegativeNumber(arr);
    cout<<"\nSum of Negative Numbers : "<<result<<endl;
    return 0;
}