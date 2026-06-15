// Problem: BFS Traversal of Graph
// Link: https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// Approach: Make visited array, use queue. For each unvisited node, add adjacent nodes to queue and put them in answer vector
// Date Solved: 09-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bfs(vector<vector<int>> &adj)
    {
        vector<int> bfs;
        queue<int> q;
        vector<int> vis(adj.size(), 0);
        q.push(0);
        vis[0] = 1;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};