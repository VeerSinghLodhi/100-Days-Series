#include<stdio.h>
// Function for Check Leap Year
int getCheckLeapYear(int year){
    // Check if the year is divisible by 4 but not by 100, 
    // Or if it is divisible by 400
    if((year%4==0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}
// Let's Start here
void main(){
    int year;
    // Prompt the user to enter a year
    printf("\nEnter a year to check if it's a leap year: ");
    scanf("%d",&year);
    // Call the fucntion and display the result
    int res=getCheckLeapYear(year);
    if(res)
        printf("%d is Leap Year!!",year);
    else
        printf("%d is not a Leap Year!!",year);
}