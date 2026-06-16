// Problem: number of islands
// Link: https://leetcode.com/problems/number-of-islands/
// Approach: you have to do travers and bfs parallel if a node is not visited then store it in queue and do bfs and for every unvisited you have to increase count
// Date Solved: 14-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1' && vis[i][j] == 0)
                {
                    ans++;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    vis[i][j] = 1;
                    while (!q.empty())
                    {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for (int d = 0; d < 4; d++)
                        {
                            int nx = x + dx[d], ny = y + dy[d];
                            if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '1' && vis[nx][ny] == 0)
                            {
                                vis[nx][ny] = 1;
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};
