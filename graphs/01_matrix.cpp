// Problem: 01 Matrix
// Link: https://leetcode.com/problems/01-matrix/
// Approach:same as Flood fill but some condition change
// Date Solved: 11-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                    q.push({i, j});
                else
                    vis[i][j] = -1;
            }
        }
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        int t = 0;
        while (!q.empty())
        {
            int sz = q.size();
            t++;
            while (sz--)
            {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                for (int d = 0; d < 4; d++)
                {
                    int ni = i + dx[d], nj = j + dy[d];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && vis[ni][nj] == -1)
                    {
                        ans[ni][nj] = t;
                        q.push({ni, nj});
                        vis[ni][nj] = 0;
                    }
                }
            }
        }
        return ans;
    }
};