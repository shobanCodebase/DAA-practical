# Knapsack Problem Using Dynamic Programming

## Overall Summary

The ****Knapsack Problem**** is a classic optimization problem in which we determine the maximum total value that can be obtained by selecting items with given weights and values, while ensuring that the total weight does not exceed the capacity of the knapsack. In the ****0/1 Knapsack Problem****, each item can either be selected once or not selected at all.

A direct recursive solution may repeatedly solve the same subproblems, resulting in inefficient execution. ****Dynamic Programming (DP)**** provides an efficient solution by breaking the problem into smaller subproblems and storing their results.

We define a DP table where `dp[i][w]` represents the maximum value that can be obtained using the first `i` items with a knapsack capacity of `w`. For each item, we consider two choices: either include the item if it fits within the current capacity, or exclude it. The maximum of these two choices is stored in the DP table.

The general recurrence is:

`dp[i][w] = max(dp[i-1][w], value[i-1] + dp[i-1][w-weight[i-1]])`

If the item cannot fit within the current capacity, the value is carried forward:

`dp[i][w] = dp[i-1][w]`

The algorithm starts with `dp[0][w] = 0` because no value can be obtained when there are no items. Similarly, `dp[i][0] = 0` because a knapsack with zero capacity cannot contain any items. By storing and reusing previously calculated results, the algorithm avoids repeated computations and efficiently determines the maximum achievable value.

## Overall Conclusion

The Knapsack Problem demonstrates how dynamic programming can transform an inefficient recursive or brute-force solution into an efficient algorithm by storing and reusing solutions to smaller subproblems. The DP approach is systematic and provides an effective way to determine the optimal combination of items within a given capacity.

By defining an appropriate state, recurrence relation, and base cases, the maximum value can be calculated efficiently with a time complexity of `O(n × W)`, where `n` is the number of items and `W` is the knapsack capacity. Therefore, dynamic programming is an effective technique for solving the ****0/1 Knapsack Problem**** and is an important example of the principles of ****optimal substructure**** and ****overlapping subproblems****.