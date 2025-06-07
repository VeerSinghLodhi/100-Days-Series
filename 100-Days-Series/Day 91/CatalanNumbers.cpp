#include<iostream>
using namespace std;
 // Function to calculate factorial
int factorial(int n){
    if(n==1 || n==0)
        return 1;
    return n*factorial(n-1);
}
// Function to calculate the nth Catalan number
int getCatalan(int n){
    return factorial(n*2)/(factorial(n+1)*factorial(n));
}
// Let's Start Here
int main(){
    int n;
    cout<<"\nEnter the number of term (N) : ";
    cin>>n;
    cout<<"\nCatalan Numbers up to "<<n<<" terms : "<<endl;
    for(int i=0;i<n;i++){
        cout<<getCatalan(i)<<" ";
    }
    return 0;
}