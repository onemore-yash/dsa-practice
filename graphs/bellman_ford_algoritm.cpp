// Problem: Bellman-ford Algoritm
// Link: https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1
// Approach: you have to relax edges V-1 time and if you want to find is there a negetive cycle then you have to relax one more time and check is distance decreasing then there is negative cycle
// Date Solved: 18-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        vector<int> dis(V, 1e8);
        dis[src] = 0;
        for (int i = 0; i <= V; i++)
        {
            for (auto it : edges)
            {
                int node = it[0];
                int neigh = it[1];
                int w = it[2];
                if (dis[node] != 1e8 && dis[node] + w < dis[neigh])
                {
                    dis[neigh] = w + dis[node];
                }
            }
        }
        for (auto it : edges)
        {
            int node = it[0];
            int neigh = it[1];
            int w = it[2];
            if (dis[node] != 1e8 && dis[node] + w < dis[neigh])
            {
                return {-1};
            }
        }
        return dis;
    }
};
