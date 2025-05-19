public class KnapsackProblem {

    // Method to solve the 0/1 Knapsack problem using Dynamic Programming
    public static int knapsack01(int[] weights, int[] values, int capacity) {
        int n = weights.length; // Number of items
        // Create a DP table
        int[][] dp = new int[n + 1][capacity + 1];
        // Fill the DP table
        for (int i = 0; i <= n; i++) {
            for (int w = 0; w <= capacity; w++) {
                if(i==0 || w==0){
                    dp[i][w]=0;
                }
                else if (weights[i - 1] <= w) {
                    dp[i][w] = Math.max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]]);
                } else {
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }
        // The maximum value will be in the last cell of the table
        return dp[n][capacity];
    }
    // Main Method
    public static void main(String[] args) {
        int[] weights = {1, 2, 3, 2}; // Item weights
        int[] values = {6, 10, 12, 7}; // Item values
        int capacity = 5; // Knapsack capacity
        int maxValue = knapsack01(weights, values, capacity);
        System.out.println("The maximum value is: " + maxValue);
    }
}
