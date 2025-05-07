#include <stdio.h>
int main() {
    int n;
    printf("\nEnter the number of rows : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        int start;
        if (i % 2 == 0) {
            start = 0; // Even row starts with 0
        } else {
            start = 1; // Odd row starts with 1
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", start);
            if (start == 1) {
                start = 0;
            } else {
                start = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
