// Problem: Count of distinct substring
// Pattern: Tries
// Link: https://www.naukri.com/code360/problems/-implement-trie-ll_1387095
// Date Solved: 29-06-2026
// Approach:just need node structure and you have to go through all possiblities and is that char is not present you have to increase cnt

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *links[26];
    bool containsKey(char ch) { return (links[ch - 'a'] != NULL); }
    void put(char ch, Node *node) { links[ch - 'a'] = node; }
    Node *get(char ch) { return links[ch - 'a']; }
};

class Solution
{
public:
    int countSubs(string &s)
    {
        int cnt = 0;
        Node *root = new Node();

        for (int i = 0; i < s.length(); i++)
        {
            Node *node = root;
            for (int j = i; j < s.length(); j++)
            {
                if (!node->containsKey(s[j]))
                {
                    cnt++;
                    node->put(s[j], new Node());
                }
                node = node->get(s[j]);
            }
        }
        return cnt;
    }
};