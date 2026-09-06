#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minCoins(vector<int>& coins, int amount)
{
    // dp[i] = minimum coins needed to make amount i
    vector<int> dp(amount + 1, INT_MAX);

    // 0 coins are needed to make amount 0
    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
    {
        for (int coin : coins)
        {
            if (coin <= i && dp[i - coin] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    // If amount cannot be formed
    if (dp[amount] == INT_MAX)
        return -1;

    return dp[amount];
}

int main()
{
    vector<int> coins = {1, 2, 5};
    int amount = 11;

    cout << "Minimum coins: " << minCoins(coins, amount) << endl;

    return 0;
}