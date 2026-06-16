// Problem: Surrounded Regions
// Link: https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
// Approach: use simple but here you have to start from zeros which are on the bouandry
// Date Solved: 11-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<vector<char>> &board)
    {
        int n = board.size();
        int m = board[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < m; i++)
        {
            if (board[0][i] == 'O')
            {
                q.push({0, i});
                vis[0][i] = -1;
            }
            if (board[n - 1][i] == 'O')
            {
                q.push({n - 1, i});
                vis[n - 1][i] = -1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (board[i][0] == 'O')
            {
                q.push({i, 0});
                vis[i][0] = -1;
            }
            if (board[i][m - 1] == 'O')
            {
                q.push({i, m - 1});
                vis[i][m - 1] = -1;
            }
        }

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while (!q.empty())
        {
            int sz = q.size();
            while (sz--)
            {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                for (int d = 0; d < 4; d++)
                {
                    int ni = i + dx[d], nj = j + dy[d];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && board[ni][nj] == 'O' && vis[ni][nj] != -1)
                    {
                        vis[ni][nj] = -1;
                        q.push({ni, nj});
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (vis[i][j] == 0 && board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
        return;
    }
};