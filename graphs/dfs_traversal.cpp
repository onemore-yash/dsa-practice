// Problem: DFS Traversal of Graph
// Link: https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
// Approach: you have to make helper function and for any node you have to recursivly call helper for adjecent nodes and everytime store to res vector which we also pass with function
// Date Solved: 09-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{

    void helper(int node, vector<vector<int>> &adj, vector<int> &vis, vector<int> &res)
    {
        vis[node] = 1;
        res.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                helper(it, adj, vis, res);
            }
        }
    }

public:
    vector<int> dfs(vector<vector<int>> &adj)
    {
        // Code here
        vector<int> res;
        vector<int> vis(adj.size(), 0);

        helper(0, adj, vis, res);
        return res;
    }
};