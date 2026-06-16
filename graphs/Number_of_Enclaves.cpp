// Problem: Number of Enclaves
// Link: https://leetcode.com/problems/number-of-enclaves/description/
// Approach: Use simple BFS but you have to minuse from total which can wrok off the Boundary
// Date Solved: 12-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numEnclaves(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int total = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                    total++;
                if ((i == 0 || j == 0 || j == m - 1 || i == n - 1) && grid[i][j] == 1)
                {
                    q.push({i, j});
                    vis[i][j] = -1;
                    cnt++;
                }
            }
        }
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while (!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for (int d = 0; d < 4; d++)
            {
                int ni = i + dx[d], nj = j + dy[d];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == 1 && vis[ni][nj] != -1)
                {
                    vis[ni][nj] = -1;
                    q.push({ni, nj});
                    cnt++;
                }
            }
        }
        return total - cnt;
    }
};