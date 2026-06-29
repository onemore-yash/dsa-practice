// Problem: Max XOR of any 2 element in arr
// Pattern: Tries
// Link: https://www.geeksforgeeks.org/problems/maximum-xor-of-two-numbers-in-an-array/1
// Date Solved: 29-06-2026
// Approach:in tries you need 2 function insert in which you insert 32 bits in left to right and 2nd function is getmax in that you check from left to right if opposite bit present then you go there o/w you go to next bitand return max

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
    int maxXor(vector<int> &arr)
    {
        Trie trie;
        for (auto &it : arr)
            trie.insert(it);
        int maxi = 0;
        for (auto it : arr)
        {
            maxi = max(maxi, trie.getmax(it));
        }
        return maxi;
    }
};
