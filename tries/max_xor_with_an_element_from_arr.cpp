// Problem: max xor with an ele from arr
// Pattern: Tries
// Link: https://leetcode.com/problems/maximum-xor-with-an-element-from-array/description/
// Date Solved: 29-06-2026
// Approach:Sort arr Sort queries by mi ind = 0 for each query (in increasing mi): while(ind < n && arr[ind] <= mi) insert arr[ind] into Trieind++ answer = maximum XOR with xi store at original index

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *links[2];
    bool containsKey(int bit)
    {
        return links[bit] != NULL;
    }
    Node *get(int bit)
    {
        return links[bit];
    }
    void put(int bit, Node *node)
    {
        links[bit] = node;
    }
};
class Trie
{
public:
    Node *root;
    Trie()
    {
        root = new Node();
    }

public:
    void insert(int num)
    {
        Node *node = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (!node->containsKey(bit))
            {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }
    int getmax(int num)
    {
        Node *node = root;
        int maxnum = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (node->containsKey(1 - bit))
            {
                maxnum = maxnum | (1 << i);
                node = node->get(1 - bit);
            }
            else
            {
                node = node->get(bit);
            }
        }
        return maxnum;
    }
};

class Solution
{
public:
    vector<int> maximizeXor(vector<int> &arr, vector<vector<int>> &queries)
    {
        sort(arr.begin(), arr.end());
        vector<pair<int, pair<int, int>>> oQ;
        int q = queries.size();
        for (int i = 0; i < q; i++)
        {
            oQ.push_back({queries[i][1], {queries[i][0], i}});
        }
        sort(oQ.begin(), oQ.end());
        vector<int> ans(q, 0);
        int ind = 0;
        int n = arr.size();
        Trie trie;
        for (int i = 0; i < q; i++)
        {
            int ai = oQ[i].first;
            int xi = oQ[i].second.first;
            int qInd = oQ[i].second.second;
            while (ind < n && arr[ind] <= ai)
            {
                trie.insert(arr[ind]);
                ind++;
            }
            if (ind == 0)
                ans[qInd] = -1;
            else
                ans[qInd] = trie.getmax(xi);
        }

        return ans;
    }
};
