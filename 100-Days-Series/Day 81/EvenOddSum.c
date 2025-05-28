#include<stdio.h>
// Function to calculate the sum of even numbers.
int getSumOfEvenNumber(int number[],int size){
    int evenSum=0;
    for(int i=0;i<size;i++){
        if(number[i]%2==0){
            evenSum+=number[i];
        }
    }
    return evenSum;
}
// Function to calculate the sum of odd numbers
int getSumOfOddNumber(int number[],int size){
    int oddSum=0;
    for(int i=0;i<size;i++){
        if(number[i]%2!=0){
            oddSum+=number[i];
        }
    }
    return oddSum;
}
// Let's Start Here
void main(){
    int n;
    printf("\nEnter the number of integers : ");
    scanf("%d",&n);
    int number[n];
    for(int i=0;i<n;i++){
        printf("\nEnter %d interger : ",i+1);
        scanf("%d",&number[i]);
    }
    int evenSum=getSumOfEvenNumber(number,n);
    int oddSum=getSumOfOddNumber(number,n);
    printf("\nThe Sum of Even Integers is : %d",evenSum);
    printf("\nThe sum of Odd Integers is : %d",oddSum);

}