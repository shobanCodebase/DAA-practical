#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 0/1 Knapsack Problem using Dynamic Programming
int knapsack(vector<int>& weights, vector<int>& values, int capacity)
{
    int n = values.size();

    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= capacity; w++)
        {
            if (weights[i - 1] <= w)
            {
                dp[i][w] = max(
                    values[i - 1] + dp[i - 1][w - weights[i - 1]],
                    dp[i - 1][w]
                );
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][capacity];
}

int main()
{
    int n;

    // Input
    cout << "Enter number of items: ";
    cin >> n;

    vector<int> weights(n);
    vector<int> values(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter weight of item " << i + 1 << ": ";
        cin >> weights[i];

        cout << "Enter value of item " << i + 1 << ": ";
        cin >> values[i];
    }

    int capacity;

    cout << "Enter capacity of knapsack: ";
    cin >> capacity;

    int max_value = knapsack(weights, values, capacity);

    cout << "Maximum value that can be obtained: "
         << max_value << endl;

    return 0;
}