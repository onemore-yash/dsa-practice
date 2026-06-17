// Problem: Path With Minimum Effort
// Link: https://leetcode.com/problems/path-with-minimum-effort/description/
// Approach: you have to use dijkstra algo and for every neighbour you have to calculate effort and compare with curr node's effort and take minimum
// Date Solved: 17-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumEffortPath(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>,
                       greater<pair<pair<int, int>, int>>>
            pq;
        vector<vector<int>> dis(n, vector<int>(m, 1e9));

        pq.push({{0, 0}, 0});
        dis[0][0] = 0;
        while (!pq.empty())
        {
            int i = pq.top().first.first;
            int j = pq.top().first.second;
            int d = pq.top().second;
            pq.pop();
            int dx[] = {0, 0, -1, 1};
            int dy[] = {1, -1, 0, 0};

            if (i == n - 1 && j == m - 1)
                return d;

            for (int k = 0; k < 4; k++)
            {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m)
                {
                    int maxEffort = max(d, abs(grid[i][j] - grid[ni][nj]));
                    if (dis[ni][nj] > maxEffort)
                    {
                        dis[ni][nj] = maxEffort;
                        pq.push({{ni, nj}, dis[ni][nj]});
                    }
                }
            }
        }
        return 0;
    }
};