#include<iostream>
#include<vector>
using namespace std;
// Function  to find unique elements
void getUnion(const vector<int> arr1,const vector<int> arr2){
    int uniArray[arr1.size()+arr2.size()];
    int k=0;
    for(int i=0;i<arr1.size();i++){
        uniArray[k++]=arr1[i];
    }
    for(int i=0;i<arr2.size();i++){
        bool isPresent=false;
        for(int j=0;j<k;j++){
            if(arr2[i]==uniArray[j]){
                isPresent=true;
                break;
            }
        }
        if(!isPresent){
            uniArray[k++]=arr2[i];
        }
    }
    cout<<"\nUnion of arrays: "<<endl;
    for(int i=0;i<k;i++){
        printf("%d ",uniArray[i]);
    }

}
// Let's Start here
int main(){
    vector<int>arr1={1,2,3,4,5,6,7,8};
    vector<int>arr2={5,6,7,8,9,10};
    getUnion(arr1,arr2);
}