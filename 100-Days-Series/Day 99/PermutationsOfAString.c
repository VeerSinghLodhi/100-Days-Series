#include<stdio.h>
#include<string.h>
// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
// Recursive function to generate permutations
void permute(char *str,int l,int r){
    if(l==r){
        printf("%s\n",str);
    }else{
        for(int i=l;i<=r;i++){
            swap((str + l), (str + i)); // Swap current character with the leftmost character
             permute(str, l + 1, r);    // Recur for the rest of the string
             swap((str + l), (str + i)); // Backtrack to the original configuration
        }
    }
}
// Let's Start Here
void main(){
    char str[]="ABC";
    int len=strlen(str);
    printf("\nAll Permutations of the string \'%s\' are : \n",str);
    permute(str,0,len-1);
}