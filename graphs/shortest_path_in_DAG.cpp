// Problem: shortest path in DAG
// Link: https://www.naukri.com/code360/problems/shortest-path-in-dag_8381897?leftPanelTabValue=PROBLEM
// Approach: here you have to first find stack using topological sort then one by one take element from stack and check distance with neighbours for that you have to define one distance array and initialize with 1e9 then every time if you found min diatance then change in distance array
// Date Solved: 16-06-2026

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, stack<int> &st, vector<vector<pair<int, int>>> &adj)
{
    vis[node] = -1;
    for (auto edge : adj[node])
    {
        int neighbor = edge.first;
        int weight = edge.second;
        if (!vis[neighbor])
            dfs(neighbor, vis, st, adj);
    }
    st.push(node);
}

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
    vector<vector<pair<int, int>>> adj(n);

    for (auto it : edges)
    {
        adj[it[0]].push_back({it[1], it[2]});
    }
    stack<int> st;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i, vis, st, adj);
    }
    vector<int> dis(n, 1e9);
    dis[0] = 0;
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        int d = dis[node];
        for (auto edge : adj[node])
        {
            int neighbor = edge.first;
            int weight = edge.second;
            if (d + weight < dis[neighbor])
                dis[neighbor] = d + weight;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (dis[i] == 1e9)
            dis[i] = -1;
    }
    return dis;
}
