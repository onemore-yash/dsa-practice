// Problem:Shortest Path in Binary Matrix
// Link: https://leetcode.com/problems/shortest-path-in-binary-matrix/description/
// Approach: you can use either use dijkstra algo or BFS
// Date Solved: 17-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {
        int n = grid.size();
        if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
            return -1;

        priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>,
                       greater<pair<pair<int, int>, int>>>
            pq;
        vector<vector<int>> dis(n, vector<int>(n, 1e9));

        pq.push({{0, 0}, 0});
        dis[0][0] = 0;
        while (!pq.empty())
        {
            int i = pq.top().first.first;
            int j = pq.top().first.second;
            int d = pq.top().second;
            pq.pop();
            int dx[] = {0, 0, -1, 1, 1, -1, -1, 1};
            int dy[] = {1, -1, 0, 0, -1, 1, -1, 1};

            // if(d > dis[i][j]) continue;

            for (int k = 0; k < 8; k++)
            {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < n && nj >= 0 && nj < n && grid[ni][nj] == 0 && dis[ni][nj] > d + 1)
                {
                    dis[ni][nj] = d + 1;
                    pq.push({{ni, nj}, dis[ni][nj]});
                }
            }
        }
        return dis[n - 1][n - 1] >= 1e9 ? -1 : dis[n - 1][n - 1] + 1;
    }
};