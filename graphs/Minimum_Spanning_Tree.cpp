// Problem: Minimum Spanning Tree
// Link:https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1
// Approach:you have to use priority queue with vis array and start with any node and store weight,node and parent if you need edges at the end and every time you have to take top of pq and if already visited then continue otherwise sum+=w and put non visited neighbour in pq
// Date Solved: 19-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int spanningTree(int V, vector<vector<int>> &edges)
    {
        vector<vector<pair<int, int>>> adj(V);

        for (auto &e : edges)
        {
            int u = e[0], v = e[1], wt = e[2];
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        vector<int> vis(V, 0);

        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        pq.push({0, 0});

        int sum = 0;

        while (!pq.empty())
        {

            auto x = pq.top();
            int node = x.second;
            int wt = x.first;
            pq.pop();

            if (vis[node])
                continue;

            vis[node] = 1;
            sum += wt;

            for (auto it : adj[node])
            {
                int adjNode = it.first;
                int edgeWt = it.second;
                if (!vis[adjNode])
                {
                    pq.push({edgeWt, adjNode});
                }
            }
        }

        return sum;
    }
};