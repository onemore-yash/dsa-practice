// Problem: Alien Dictonary
// Link:https://www.geeksforgeeks.org/problems/alien-dictionary/1
// Approach: here from words you have to make adjacancy list and then simply do topoogical sort
// Date Solved: 15-06-2026

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string findOrder(vector<string> &words)
    {
        vector<vector<int>> adj(26);
        vector<int> indegree(26, 0);
        for (int i = 0; i < words.size() - 1; i++)
        {
            int j = 0;
            while (j < words[i].size() && j < words[i + 1].size())
            {
                if (words[i][j] != words[i + 1][j])
                {
                    adj[words[i][j] - 'a'].push_back(words[i + 1][j] - 'a');
                    indegree[words[i + 1][j] - 'a']++;
                    break;
                }
                j++;
            }
        }
        int x = 0;
        vector<bool> present(26, false);
        for (auto &w : words)
        {
            for (char c : w)
            {
                if (!present[c - 'a'])
                {
                    present[c - 'a'] = true;
                    x++;
                }
            }
        }

        queue<int> q;
        for (int i = 0; i < 26; i++)
        {
            if (present[i] && indegree[i] == 0)
                q.push(i);
        }

        string ans;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back((char)(node + 'a'));
            for (auto it : adj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                    q.push(it);
            }
        }
        if (ans.size() == x)
            return ans;
        return "";
    }
};