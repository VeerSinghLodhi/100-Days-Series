#include<iostream>
using namespace std;
// Function for check leap year
bool getCheckLeapYear(int year){
    // Check if the year is divisible by 4 but not by 100, 
    // Or if it is divisible by 400
    if((year%4==0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}
// Let's Start here
int main(){
    int year;
    //Prompt the user to enter a year
    cout<<"\nEnter a year to check it's a leap year: ";
    cin>>year;
    // Call the function and display the result
    bool res=getCheckLeapYear(year);
    if(res)
        cout<<year<<" is a leap year!!"<<endl;
    else
        cout<<year<<" is not a leap year!!"<<endl;
    return 0;
}