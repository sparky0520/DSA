#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>> edges)
    {
        // Code here
        vector<vector<int>> result;
        for (int i = 0; i < V; i++)
        {
            vector<int> con;
            result.push_back(con);
        }
        for (auto &edge : edges)
        {
            result[edge.first].push_back(edge.second);
            result[edge.second].push_back(edge.first);
        }
        return result;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<pair<int, int>> edges;
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        Solution obj;
        vector<vector<int>> adj = obj.printGraph(V, edges);
        for (int i = 0; i < V; i++)
        {
            sort(adj[i].begin(), adj[i].end());
            for (auto it : adj[i])
                cout << it << " ";
            cout << endl;
        }
    }
    return 0;
}