// Problem: Account Merge
// Link: https://leetcode.com/problems/accounts-merge/
// Approach:Use DSU to group account indices that share at least one common email by mapping each email to the first account where it appears and unioning subsequent accounts containing that email
//          After forming the groups, collect all emails belonging to the same DSU parent, sort them, and prepend the account holder's name to construct the merged accounts
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
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        int n = accounts.size();
        DJS ds(n);
        unordered_map<string, int> mapMailNode;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < accounts[i].size(); j++)
            {
                string mail = accounts[i][j];

                if (mapMailNode.find(mail) == mapMailNode.end())
                {
                    mapMailNode[mail] = i;
                }
                else
                {
                    ds.unibysize(i, mapMailNode[mail]);
                }
            }
        }

        vector<string> mergedmail[n];
        for (auto it : mapMailNode)
        {
            string mail = it.first;
            int node = ds.find(it.second);
            mergedmail[node].push_back(mail);
        }

        vector<vector<string>> ans;
        for (int i = 0; i < n; i++)
        {
            if (mergedmail[i].size() == 0)
                continue;
            sort(mergedmail[i].begin(), mergedmail[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for (auto it : mergedmail[i])
            {
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};