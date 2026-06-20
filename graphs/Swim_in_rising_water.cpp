// Problem: Swim in rising water
// Link:https://leetcode.com/problems/swim-in-rising-water/
// Approach: use Dijkstra algo and in priority queue store max weight from node and neighbours weight and row and colum and if you areach last position then return node's weight weight o/w -1
// Date Solved: 20-06-2026

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