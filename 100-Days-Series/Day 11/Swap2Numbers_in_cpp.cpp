#include <iostream>
using namespace std;
// Let's Start here
int main() { 
    int a, b;
    //Input two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout<<"\nBefore Swapping...";
    cout<<"\nA is "<<a<<" \nB is "<<b;
    
    // a=(a+b)-(b=a); Swapping Logic
    a = a + b;
    b = a - b;  // This is also a Swapping Logic
    a = a - b;
    // Final Result
    cout<<"\nAfter Swapping...";
    cout<<"\nA is "<<a<<" \nB is "<<b;
    return 0;
}
