// Problem: Bipartite Graph
// Link:https://leetcode.com/problems/is-graph-bipartite/description/
// Approach:use bfs for diconected graph and color child with other color than parents and every time check
// Date Solved: 14-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isBipartite(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (vis[i] != 0)
                continue;
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (auto it : graph[node])
                {
                    if (vis[it] == 0)
                    {
                        vis[it] = (vis[node] == 1) ? 2 : 1;
                        q.push(it);
                    }
                    else if (vis[it] == vis[node])
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};