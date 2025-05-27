#include<iostream>
using namespace std;
// Function to print multiplication table for a given number
void getPrintTable(int number){
    cout<<"\nMultiplication table for "<<number<<" : "<<endl;
    for(int i=1;i<=10;i++){
        //Correcting the multiplication logic in the loop
        cout<<"\n"<<number<<" x "<<i<<" = "<<(number*i);
    }
}
// Let's Start Here
int main(){
    int number;
    // Prompt the user to enter a number
    cout<<"\nEnter a number to print its multiplication table : ";
    cin>>number;
    // call the function to print the multiplication table
    getPrintTable(number);
}