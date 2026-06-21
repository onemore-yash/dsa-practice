// Problem: Count Strongly Connected Componants(Kosaraju's Algo)
// Link:https://www.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1
// Approach:if we perform a DFS on the graph and record the finishing times of nodes, then by reversing the graph and doing DFS in the order of decreasing finishing times, we can group nodes into SCCs.
// Date Solved: 21-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj, stack<int> &st)
    {
        vis[node] = 1;
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, vis, adj, st);
            }
        }
        st.push(node);
    }
    void dfs3(int node, vector<int> &vis, vector<vector<int>> &adjT)
    {
        vis[node] = 1;
        for (auto it : adjT[node])
        {
            if (!vis[it])
            {
                dfs3(it, vis, adjT);
            }
        }
    }

public:
    int kosaraju(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj(n);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<int> vis(n, 0);
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
                dfs(i, vis, adj, st);
        }
        vector<vector<int>> adjT(n);
        for (int i = 0; i < n; i++)
        {
            vis[i] = 0;
            for (auto it : adj[i])
            {
                adjT[it].push_back(i);
            }
        }

        int scc = 0;
        while (!st.empty())
        {
            int node = st.top();
            st.pop();
            if (!vis[node])
            {
                scc++;
                dfs3(node, vis, adjT);
            }
        }
        return scc;
    }
};