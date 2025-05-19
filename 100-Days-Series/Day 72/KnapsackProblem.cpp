#include<iostream>
#include<vector>
using namespace std;
// Function to solve the 0/1 Knapsack problem using Dynamic Programming
int getKnapsack01(vector<int>&weights,vector<int>&values,int capacity){
    int n=weights.size();// Number of items;
    // Create DP Table
    int dp[n+1][capacity+1];
    // Fill the table
    for(int i=0;i<=n;i++){
        for(int w=0;w<=capacity;w++){
            if(i==0 || w==0){
                dp[i][w]=0;
            }else if(weights.at(i-1)<=w){
                int value1=dp[i-1][w];
                int value2=values.at(i-1)+dp[i-1][w-weights.at(i-1)];
                dp[i][w]=(value1 > value2) ? value1 : value2;
            }else{
                dp[i][w]=dp[i-1][w];
            }
        }
    }
    return dp[n][capacity];
}
// Let't Start Here
int main(){
    vector<int>weights={1, 2, 3, 2};
    vector<int>values={6, 10, 12, 7};
    int capacity=5;
    int maxValue=getKnapsack01(weights,values,capacity);
    cout<<"\nThe maximum value is : "<<maxValue;
    return 0;
}