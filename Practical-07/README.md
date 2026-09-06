# Making Change Problem Using Dynamic Programming

## Overall Summary

The **Making Change Problem** is a classic optimization problem in which we determine the minimum number of coins required to make a given amount of money from a set of available coin denominations. A direct recursive solution may repeatedly solve the same subproblems, leading to inefficient execution.

**Dynamic Programming (DP)** provides an efficient solution by breaking the problem into smaller subproblems and storing their results. We define a DP table where `dp[i]` represents the minimum number of coins needed to make amount `i`. For every amount, we consider each available coin and update the result using previously computed values.

The general recurrence is:

`dp[i] = min(dp[i], dp[i - coin] + 1)`

The algorithm starts with `dp[0] = 0`, since zero coins are required to make an amount of zero. The remaining entries are initialized to a large value and updated iteratively. This approach avoids repeated calculations and significantly improves the efficiency compared with a naive recursive implementation.

## Overall Conclusion

The Making Change Problem demonstrates how dynamic programming can transform an inefficient recursive problem into an efficient algorithm by storing and reusing solutions to smaller subproblems. The DP approach is simple, systematic, and scalable for larger target amounts.

By defining an appropriate state, recurrence relation, and base case, the minimum number of coins can be calculated efficiently. Therefore, dynamic programming is an effective technique for solving the Making Change Problem and is a useful example of the principles of **optimal substructure** and **overlapping subproblems**.