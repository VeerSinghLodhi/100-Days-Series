#include<stdio.h>
// Function to print Diamand Pattern With Numbers
void getPrintPattern(int rows){
    // Upper Part
    for(int i=1;i<=rows;i++){
        for(int space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("%d",i);
        }
        printf("\n");
    }
    // Lower Part
    for(int i=rows-1;i>=1;i--){
        for(int space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("%d",i);
        }
        printf("\n");
    }

}
// Let's Start Here
void main(){
    int rows;
    printf("\nEnter the number of rows : ");
    scanf("%d",&rows);
    getPrintPattern(rows);
}