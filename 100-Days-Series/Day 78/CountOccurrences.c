#include<stdio.h>
// Method to count occurrences of a specific number in a 2D array
int getCountOccurrences(int size,int arr[size][size],int numberToSearch ){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i][j]==numberToSearch)
                count++;
        }
    }
    return count;
}
// Let's Start Here
void main(){
    int numberToSearch;
    int arr[3][3]={
         {4, 7, 8},
         {8, 8, 7},
         {1, 7, 9}
    };
    printf("\nEnter number to search occurrence in the 2D Array : ");
    scanf("%d",&numberToSearch);
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    int count=getCountOccurrences(arrsize,arr,numberToSearch);
    printf("\nThe number %d appears %d times in the array.",numberToSearch,count);
}