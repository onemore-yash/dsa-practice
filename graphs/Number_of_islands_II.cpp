// Problem: NUmber of Islands II
// Link: https://www.geeksforgeeks.org/problems/number-of-islands/1
// Approach:Treat each newly added land cell as a separate island and increase the island count by 1
//          Check its 4 neighbors; if a neighbor is land and belongs to a different DSU component, union them and decrease the island count by 1
// Date Solved: 20-06-2026

#include <bits/stdc++.h>
using namespace std;

class DJS
{
public:
    vector<int> parent, size, rank;
    DJS(int n)
    {
        parent.resize(n + 1);
        rank.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int i)
    {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    void unibyrank(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY)
            parent[rootX] = parent[rootY];
    }

    void unibysize(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY)
            return;
        if (size[rootX] < size[rootY])
        {
            parent[rootX] = rootY;
            size[rootY] += size[rootX];
        }
        else
        {
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
        }
    }
};

class Solution
{
public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
    {
        DJS ds(n * m);
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt = 0;
        vector<int> ans;

        for (auto it : operators)
        {
            int row = it[0];
            int col = it[1];
            if (vis[row][col] == 1)
            {
                ans.push_back(cnt);
                continue;
            }
            vis[row][col] = 1;
            cnt++;
            int dr[] = {-1, 0, 1, 0};
            int dc[] = {0, 1, 0, -1};
            for (int i = 0; i < 4; i++)
            {
                int nr = row + dr[i];
                int nc = col + dc[i];
                if (nr < n && nc < m && nr >= 0 && nc >= 0)
                {
                    if (vis[nr][nc] == 1)
                    {
                        int nodeNo = row * m + col;
                        int adjNodeNo = nr * m + nc;
                        if (ds.find(nodeNo) != ds.find(adjNodeNo))
                        {
                            cnt--;
                            ds.unibysize(nodeNo, adjNodeNo);
                        }
                    }
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
