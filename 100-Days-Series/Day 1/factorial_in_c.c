#include <stdio.h>
int getFactorial(int num){
    if (num < 0)
        return -1;
    if (num == 0)
        return 1;
    else{
        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}
void main(){
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    num = getFactorial(num);
    if (num == -1)
        printf("\nFactorial of a negative number is not defined.");
    else{
        printf("\nFactorial is %d", num);
        printf("\n--------------------------");
    }
}