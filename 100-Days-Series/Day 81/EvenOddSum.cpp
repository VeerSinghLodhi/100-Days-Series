#include<iostream>
#include<vector>
using namespace std;
// Function to calculate the sum of even numbers.
int getSumOfEvenNumber(vector<int>&numbers){
    int size=numbers.size();
    int evenSum=0;
    for(int i=0;i<size;i++){
        if(numbers.at(i)%2==0){
            evenSum+=numbers.at(i);
        }
    }
    return evenSum;
}
// Function to calculate the sum of odd numbers.
int getSumOfOddNumber(vector<int>&numbers){
    int size=numbers.size();
    int oddSum=0;
    for(int i=0;i<size;i++){
        if(numbers.at(i)%2!=0){
            oddSum+=numbers.at(i);
        }
    }
    return oddSum;
}
// Let's Start Here
int main(){
    int n;
    cout<<"\nEnter the number of integers : ";
    cin>>n;
    vector<int>numbers;
    for(int i=0;i<n;i++){
        int num;
        cout<<"\nEnter "<<(i+1)<<" integer : ";
        cin>>num;
        numbers.push_back(num);
    }
    int evenSum=getSumOfEvenNumber(numbers);
    int oddSum=getSumOfOddNumber(numbers);
    cout<<"\nThe sum of Even integers is : "<<evenSum;
    cout<<"\nThe sum of Odd integers is : "<<oddSum;
}