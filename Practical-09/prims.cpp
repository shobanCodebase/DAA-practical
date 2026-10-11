#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Prim's Algorithm
void prim(vector<vector<int>>& graph)
{
    int n = graph.size();

    vector<bool> selected(n, false);
    selected[0] = true;

    vector<pair<int, pair<int, int>>> mst;
    int total_cost = 0;

    for (int count = 0; count < n - 1; count++)
    {
        int min_weight = INT_MAX;
        int u = -1, v = -1;

        for (int i = 0; i < n; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (!selected[j] && graph[i][j] != 0)
                    {
                        if (graph[i][j] < min_weight)
                        {
                            min_weight = graph[i][j];
                            u = i;
                            v = j;
                        }
                    }
                }
            }
        }

        if (v == -1)
        {
            cout << "Graph is disconnected. MST cannot be formed.\n";
            return;
        }

        selected[v] = true;
        mst.push_back({min_weight, {u, v}});
        total_cost += min_weight;
    }

    cout << "Edges in MST:\n";

    for (auto edge : mst)
    {
        cout << edge.second.first << " - "
             << edge.second.second << " : "
             << edge.first << endl;
    }

    cout << "Total cost: " << total_cost << endl;
}

int main()
{
    vector<vector<int>> graph = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    prim(graph);

    return 0;
}