#include <iostream>
using namespace std;
int getFactorial(int num){
    if (num < 0)
        return -1;
    if (num == 0)
        return 1;
    else
    {
        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}
int main(){
    int num;
    cout << "\nEnter a number :";
    cin >> num;
    num = getFactorial(num);
    if (num == -1)
        cout << "\nFactorial of a negative number is not defined.";
    else{
        cout << "\nFactorial is " << num << endl;
        cout << "\n---------------------------";
    }
    return 0;
}