// Problem: Print shortest path in undirected graph
// Link:https://www.naukri.com/code360/problems/shortest-path-in-an-unweighted-graph_981297?leftPanelTabValue=PROBLEM
// Approach: "BFS + parent tracking → shortest distance guaranteed (level-by-level exploration)
//            Path reconstruction: destination → trace parents → source → reverse"
// Date Solved: 16-06-2026

#include <bits/stdc++.h>
using namespace std;

#include <unordered_map>

#include <list>

#include <queue>

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        for (auto neighbour : adj[front])
        {
            if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = true;
                parent[neighbour] = front;
            }
        }
    }
    vector<int> ans;
    int curr = t;
    while (curr != s)
    {
        ans.push_back(curr);
        curr = parent[curr];
    }
    ans.push_back(s);
    reverse(ans.begin(), ans.end());
    return ans;
}