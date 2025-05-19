def get_knapsack_01(weights, values, capacity):
    n = len(weights)
    
    # Initialize a DP table with dimensions (n + 1) x (capacity + 1) filled with 0
    dp = [[0] * (capacity + 1) for _ in range(n + 1)]

    # Fill the DP table
    for i in range(1, n + 1):
        for w in range(1, capacity + 1):
            if weights[i - 1] <= w:
                val1 = dp[i - 1][w]  # Value if item is excluded
                val2 = values[i - 1] + dp[i - 1][w - weights[i - 1]]  # Value if item is included
                dp[i][w] = max(val1, val2)
            else:
                dp[i][w] = dp[i - 1][w]

    # The maximum value is in the last cell of the table
    return dp[n][capacity]



# Let's Start Here
weights = [1, 2, 3, 2]  # Item weights
values = [6, 10, 12, 7]  # Item values
capacity = 5  # Knapsack capacity
max_value = get_knapsack_01(weights, values, capacity)
print(f"\nThe maximum value is:",max_value)
