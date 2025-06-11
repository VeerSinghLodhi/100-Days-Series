#include<iostream>
#include<vector>
using namespace std;
// Function to find the sum of positive numbers in the array.
int getSumOfPositiveNumbers(vector<int>&arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr.at(i)>0){
            sum+=arr.at(i);
        }
    }
    return sum;
}
// Let's Start Here
int main(){
    vector<int>arr={-2, 3, 4, -1, 5};
    int result=getSumOfPositiveNumbers(arr);
    cout<<"\nSum of Positive Number : "<<result<<endl;
    return 0;
}