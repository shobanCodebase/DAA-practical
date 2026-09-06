#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Matrix Chain Multiplication using Dynamic Programming
void matrixChainOrder(const vector<int>& p,
                      vector<vector<int>>& m,
                      vector<vector<int>>& s)
{
    int n = p.size() - 1;

    // m[i][j] = minimum number of scalar multiplications
    // needed to multiply matrices Ai...Aj

    // s[i][j] = position at which the optimal split occurs

    // L is the chain length
    for (int L = 2; L <= n; L++)
    {
        for (int i = 1; i <= n - L + 1; i++)
        {
            int j = i + L - 1;

            m[i][j] = INT_MAX;

            for (int k = i; k < j; k++)
            {
                int cost = m[i][k]
                         + m[k + 1][j]
                         + p[i - 1] * p[k] * p[j];

                if (cost < m[i][j])
                {
                    m[i][j] = cost;
                    s[i][j] = k;
                }
            }
        }
    }
}

// Print optimal parenthesization
string printOptimalParenthesis(const vector<vector<int>>& s,
                               int i, int j)
{
    if (i == j)
        return "A" + to_string(i);

    int k = s[i][j];

    string left = printOptimalParenthesis(s, i, k);
    string right = printOptimalParenthesis(s, k + 1, j);

    return "(" + left + " × " + right + ")";
}

int main()
{
    // A1 = 10x30
    // A2 = 30x5
    // A3 = 5x60

    vector<int> p = {10, 30, 5, 60};

    int n = p.size() - 1;

    vector<vector<int>> m(n + 1, vector<int>(n + 1, 0));
    vector<vector<int>> s(n + 1, vector<int>(n + 1, 0));

    matrixChainOrder(p, m, s);

    cout << "Minimum number of scalar multiplications: "
         << m[1][n] << endl;

    cout << "Optimal parenthesization: "
         << printOptimalParenthesis(s, 1, n) << endl;

    return 0;
}