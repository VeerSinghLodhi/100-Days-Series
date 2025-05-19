
// Function to solve the 0/1 Knapsack problem using Dynamic Programming
const getKnapsack01=(weights, values, capacity)=>{
    const n = weights.length;

    const dp = [];
    for (let i = 0; i <= n; i++) {
        dp[i] = [];
        for (let w = 0; w <= capacity; w++) {
            dp[i][w] = 0; // Initialize each cell with 0
        }
    }

    // Fill the DP table
    for (let i = 1; i <= n; i++) {
        for (let w = 1; w <= capacity; w++) {
            if (weights[i - 1] <= w) {
                const val1 = dp[i - 1][w];
                const val2 = values[i - 1] + dp[i - 1][w - weights[i - 1]];
                dp[i][w] = val1 > val2 ? val1 : val2;
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

// Let's Start Here
const weights = [1, 2, 3, 2]; // Item weights
const values = [6, 10, 12, 7]; // Item values
const capacity = 5; // Knapsack capacity
const maxValue = getKnapsack01(weights, values, capacity);
console.log(`\nThe maximum value is: ${maxValue}`);

