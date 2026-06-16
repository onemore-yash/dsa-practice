// Problem: find eventual safe states
// Link: https://leetcode.com/problems/find-eventual-safe-states/description/
// Approach: first you have to reverse the graph then apply topological sort
// Date Solved: 15-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> eventualSafeNodes(vector<vector<int>> &adj)
    {
        int V = adj.size();
        vector<int> indegree(V, 0);
        vector<vector<int>> revadj(V);
        for (int i = 0; i < adj.size(); i++)
        {
            for (auto it : adj[i])
            {
                revadj[it].push_back(i);
                indegree[i]++;
            }
        }
        vector<int> ans;
        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
                q.push(i);
        }
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for (auto it : revadj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                    q.push(it);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};