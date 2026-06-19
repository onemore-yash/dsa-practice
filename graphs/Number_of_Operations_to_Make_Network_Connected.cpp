// Problem: Number of Operations to Make Network Connected
// Link:https://leetcode.com/problems/number-of-operations-to-make-network-connected/description/
// Approach: here you need 2 things number of disjoint componant and number of extra edges you can find by Disjoint set if parent same then extraedge++ and at the end check parent array if parent[i]==i then cnt++ and if extra>=cnt-1 then cnt-1 otherwise -1
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
    int makeConnected(int n, vector<vector<int>> &connections)
    {
        DJS ds(n);
        int extra = 0;
        for (auto it : connections)
        {
            int i = it[0];
            int j = it[1];
            if (ds.find(i) == ds.find(j))
                extra++;
            else
                ds.unibysize(i, j);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (ds.parent[i] == i)
                cnt++;
        }
        return extra >= cnt - 1 ? cnt - 1 : -1;
    }
};