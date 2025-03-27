#include<iostream>
using namespace std;
// Function for remove dupliacate elements of an array.
void getRemoveDuplicatesElements(int arr[],int &size)
{
    int temp[size];
    int i,j,index=0;
    for(i=0;i<size;i++){
        for(j=0;j<index;j++){
            if(arr[i]==temp[j]){
                break;
            }
        }
        if(j==index)
            temp[index++]=arr[i];
    }
    // Copy unique elements back to the original array.
    for (i = 0; i < index; i++) {
        arr[i] = temp[i];
    }
    size=index;//Update the size to reflect unique elements.
}
// Let's Start here
int main(){
    int n,i;
    cout<<"\nEnter the number of elements in the array: ";
    cin>>n;
    int arr[n]; // An Array Created
    cout<<"\nEnter the elements of the array:\n";
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }
    // Call the function for remove duplicate elements
    getRemoveDuplicatesElements(arr,n);
    // Print after removing duplicates elements
    cout<<"\nArray after removing duplicates:\n";
    for (i = 0; i < n; i++) {
        cout<<" "<<arr[i];
    }
}