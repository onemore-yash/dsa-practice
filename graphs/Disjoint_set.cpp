// Problem: Disjoint Graph
// Link: https://www.geeksforgeeks.org/problems/disjoint-set-union-find/1
// Approach: Each element initially belongs to its own set; find() returns the representative (ultimate parent) of a set using path compression.
//         union() merges two sets by connecting their representatives, preferably using rank or size to keep the tree shallow.
// Date Solved: 19-06-2026

#include <bits/stdc++.h>
using namespace std;
// #1
class DJS
{
public:
    vector<int> parent;

    DJS(int n)
    {
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int i)
    {
        if (parent[i] == i)
            return i;

        return parent[i] = find(parent[i]);
    }

    void unionset(int u, int v)
    {
        int rootu = find(u);
        int rootv = find(v);

        if (rootu != rootv)
            parent[rootu] = parent[rootv];
        return;
    }
};

class Solution
{

public:
    vector<int> DSU(int n, vector<vector<int>> &queries)
    {

        int k = queries.size();
        DJS ds(n);
        vector<int> ans;

        for (int i = 0; i < k; i++)
        {
            if (queries[i][0] == 1)
            {
                int x = queries[i][1];
                int z = queries[i][2];
                ds.unionset(x, z);
            }
            else if (queries[i][0] == 2)
            {
                int x = queries[i][1];
                ans.push_back(ds.find(x));
            }
        }
        return ans;
    }
};

// #2

class DJS
{
public:
    vector<int> parent, size;

    DJS(int n)
    {
        parent.resize(n + 1);
        size.resize(n + 1, 1);

        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int find(int node)
    {
        if (parent[node] == node)
            return node;

        return parent[node] = find(parent[node]);
    }

    void unionset(int u, int v)
    {
        int rootu = find(u);
        int rootv = find(v);

        if (rootu == rootv)
            return;

        // Attach smaller tree to larger tree
        if (size[rootu] < size[rootv])
            swap(rootu, rootv);

        parent[rootv] = rootu;
        size[rootu] += size[rootv];
    }
};

class Solution
{
public:
    vector<int> DSU(int n, vector<vector<int>> &queries)
    {

        DJS ds(n);
        vector<int> ans;

        for (auto &q : queries)
        {
            if (q[0] == 1)
            {
                ds.unionset(q[1], q[2]);
            }
            else
            {
                ans.push_back(ds.find(q[1]));
            }
        }

        return ans;
    }
};
