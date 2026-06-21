// Problem: Articulation Point
// Link: https://www.geeksforgeeks.org/problems/articulation-point-1/1
// Approach: same logic as bridge in graph but some condition change here you have to change conditon to low[it]>=low[parent] and it should not be the start point for start point and every time you have to mark that one to avoid repetition you have to insert new condition you have to count children
// Date Solved: 21-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int timer = 0;
    void dfs(int node, int parent, vector<int> &vis, int tin[], int low[],
             vector<int> adj[], vector<int> &hash)
    {

        vis[node] = 1;
        tin[node] = low[node] = timer++;
        int child = 0;

        for (auto it : adj[node])
        {

            if (it == parent)
                continue;

            if (!vis[it])
            {
                child++;

                dfs(it, node, vis, tin, low, adj, hash);

                low[node] = min(low[node], low[it]);

                if (low[it] >= tin[node] && parent != -1)
                    hash[node] = 1;
            }
            else
            {
                low[node] = min(low[node], tin[it]);
            }
        }

        if (parent == -1 && child > 1)
            hash[node] = 1;
    }

public:
    vector<int> articulationPoints(int n, vector<int> adj[])
    {
        vector<int> vis(n, 0);
        vector<int> hash(n, 0);
        int tin[n];
        int low[n];
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
                dfs(i, -1, vis, tin, low, adj, hash);
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (hash[i])
                ans.push_back(i);
        }
        if (ans.size() == 0)
            return {-1};
        return ans;
    }
};