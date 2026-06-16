// Problem: Topological Sort
// Link: https://www.geeksforgeeks.org/problems/topological-sort/1
// Approach:1)you have to use DFS but when you return every time you have to push that element in stack and at the end from stack push all element in to vector
//          2)here you solve with BFS with some modification like you use indegree instead of visted array
// Date Solved: 16-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topoSort(int V, vector<vector<int>> &edges)
    {
        // code here
        vector<int> indegree(V, 0);
        vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            indegree[edges[i][1]]++;
        }
        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
                q.push(i);
        }
        vector<int> ans;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for (auto it : adj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                    q.push(it);
            }
        }
        return ans;
    }
};