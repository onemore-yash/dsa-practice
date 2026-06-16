// Problem: Course Schedule II
// Link:https://leetcode.com/problems/course-schedule-ii/description/
// Approach: 1)DFS each node; for unvisited neighbors recurse, if a neighbor is in current path (pathvis) → cycle found, return {}. After visiting all neighbors, push node to ans (post-order), then reverse ans at the end for correct topological order.
//           2)use same code as topological sort and at the end just check if ans.size==n then return reverse of ans otherwise return {}
// Date Solved: 14-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findOrder(int V, vector<vector<int>> &edges)
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
        reverse(ans.begin(), ans.end());
        if (ans.size() == V)
            return ans;
        return {};
    }
};