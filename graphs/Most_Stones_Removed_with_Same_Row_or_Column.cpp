// Problem: Most Stones Removed with Same Row or Column
// Link:https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/description/
// Approach:you have to use row and col as nodes and make parent array of size maxrow+maxcol+1 and for every stone you have to join col to row and for that you have to use DJS and we just need nodes in DJS which are involv in having stone so we store r and c in unordered map as they will have stone and we just need to count them for ultimate parent
// Date Solved: 19-06-2026

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
    int removeStones(vector<vector<int>> &stones)
    {
        int maxrow = 0;
        int maxcol = 0;
        int n = stones.size();
        // for know which is the last col and row
        for (auto it : stones)
        {
            maxrow = max(maxrow, it[0]);
            maxcol = max(maxcol, it[1]);
        }
        DJS ds(maxrow + maxcol + 1);
        unordered_map<int, int> stonenodes;
        for (auto it : stones)
        {
            int noderow = it[0];
            int nodecol = it[1] + maxrow + 1;
            ds.unibysize(noderow, nodecol);
            stonenodes[noderow] = 1;
            stonenodes[nodecol] = 1;
        }
        int cnt = 0;
        for (auto it : stonenodes)
        {
            if (ds.find(it.first) == it.first)
                cnt++;
        }
        return n - cnt;
    }
};