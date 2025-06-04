#include<iostream>
using namespace std;
// Function to find Perfect Cube Number between 1 to N.
void getFindPerfectCubeNumber(int n){
    for(int i=1;i<=n;i++){
        int res=i*i*i;
        if(res>n){
            break;
        }
        cout<<res<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"\nEnter the value of N :";
    cin>>n;
    cout<<"\nPerfect Cube Number between 1 to "<<n<<endl;
    getFindPerfectCubeNumber(n);
}