// Problem: Flood Fill
// Link: https://leetcode.com/problems/flood-fill/description/
// Approach: use simple BFS
// Date Solved: 10-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        vector<vector<int>> ans = image;
        int n = image.size();
        int m = image[0].size();
        queue<pair<int, int>> q;
        q.push({sr, sc});
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        int c = image[sr][sc];
        ans[sr][sc] = color;
        if (c == color)
            return image;
        while (!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for (int d = 0; d < 4; d++)
            {
                int ni = i + dx[d], nj = j + dy[d];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && ans[ni][nj] == c)
                {
                    ans[ni][nj] = color;
                    q.push({ni, nj});
                }
            }
        }
        return ans;
    }
};