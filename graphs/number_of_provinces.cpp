// Problem: Number of Provinces
// Link: https://leetcode.com/problems/number-of-provinces/description/
// Approach: you have to use vis array you have to run a loop and for evey non visited node you have to increase cnt and call bfs/dfs
// Date Solved: 10-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void bfs(int node, vector<int> &vis, vector<vector<int>> &isConnected)
    {
        queue<int> q;
        q.push(node);
        int n = isConnected.size();
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            for (int j = 0; j < n; j++)
            {
                if (isConnected[x][j] == 1 && !vis[j])
                {
                    vis[j] = 1;
                    q.push(j);
                }
            }
        }
        return;
    }

public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        vector<int> vis(n, 0);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                ans++;
                bfs(i, vis, isConnected);
            }
        }
        return ans;
    }
};