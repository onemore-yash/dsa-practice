// Problem: undirected graph cycle
// Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
// Approach: use DFS and keep trake of parent as bool function
// Date Solved: 11-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool dfs(int node, int parent, vector<int> &vis, vector<vector<int>> &adj)
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                if (dfs(it, node, vis, adj))
                    return true;
            }
            else
            {
                if (parent != it)
                    return true;
            }
        }
        return false;
    }

public:
    bool isCycle(int V, vector<vector<int>> &edges)
    {
        // Code here
        vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(V, 0);
        for (int i = 0; i < V; i++)
        {
            if (vis[i] == 0)
                if (dfs(i, -1, vis, adj))
                    return true;
        }
        return false;
    }
};