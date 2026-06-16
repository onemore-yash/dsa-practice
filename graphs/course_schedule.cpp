// Problem: Course schedule
// Link: https://leetcode.com/problems/course-schedule/description/
// Approach: 1)here parent version is not work we have to define one more pathvis vector and every time at end we have to reset it
//           2)here use same code as topological sort and at the end you only have to check if size of ans is equal to n or not
// Date Solved: 11-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool canFinish(int V, vector<vector<int>> &edges)
    {
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
        return ans.size() == V;
    }
};