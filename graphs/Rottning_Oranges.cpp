// Problem: Rottning Oranges
// Link: https://leetcode.com/problems/rotting-oranges/
// Approach: first count total oranges and which are rotten put their coordinates In queue then do bfs(level wise travel like) then make fresh to rotton and count rotton every time then at the end check if rotton==total then return count and else -1

// Date Solved: 10-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size();
        int total = 0, rotted = 0, t = 0;
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] != 0)
                    total++;
                if (grid[i][j] == 2)
                    q.push({i, j});
            }

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while (!q.empty())
        {
            int sz = q.size();
            bool spread = false;
            while (sz--)
            {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                rotted++;
                for (int d = 0; d < 4; d++)
                {
                    int ni = i + dx[d], nj = j + dy[d];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == 1)
                    {
                        grid[ni][nj] = 2;
                        q.push({ni, nj});
                        spread = true;
                    }
                }
            }
            if (spread)
                t++;
        }

        return (rotted == total) ? t : -1;
    }
};