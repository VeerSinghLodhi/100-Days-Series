#include <stdio.h>
// Function to solve the 0/1 Knapsack problem using Dynamic Programming
int getKnapsack01(int botharraysize, int weights[], int values[], int capacity) {
    int n = botharraysize;
    // Create DP table and initialize
    int dp[n + 1][capacity + 1];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0) {
                dp[i][w] = 0; // Base case
            } else if (weights[i - 1] <= w) {
                int val1 = dp[i - 1][w];
                int val2 = values[i - 1] + dp[i - 1][w - weights[i - 1]];
                dp[i][w] = (val1 > val2) ? val1 : val2;
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
}

// Let's Start Here
int main() {
    int weights[] = {1, 2, 3, 2};
    int values[] = {6, 10, 12, 7};
    int capacity = 5;
    int arraysize = sizeof(weights) / sizeof(weights[0]);
    int maxValue = getKnapsack01(arraysize, weights, values, capacity);
    printf("\nThe maximum value is: %d\n", maxValue);
    return 0;
}
