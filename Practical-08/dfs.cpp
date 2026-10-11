#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

// Implementation of Graph Searching (DFS)
void dfs(map<char, vector<char>>& graph, char node, set<char>& visited)
{
    visited.insert(node);
    cout << node << " ";

    for (char neighbor : graph[node])
    {
        if (visited.find(neighbor) == visited.end())
        {
            dfs(graph, neighbor, visited);
        }
    }
}

int main()
{
    map<char, vector<char>> graph = {
        {'A', {'B', 'C'}},
        {'B', {'D', 'E'}},
        {'C', {'F'}},
        {'D', {}},
        {'E', {'F'}},
        {'F', {}}
    };

    set<char> visited;

    dfs(graph, 'A', visited);

    return 0;
}