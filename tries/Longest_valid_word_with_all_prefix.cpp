// Problem: Longest valid word with all prefix
// Pattern: Tries
// Link: https://www.geeksforgeeks.org/problems/longest-valid-word-with-all-prefixes/1
// Date Solved: 28-06-2026
// Approach:use trie and for every word you have to check is all prefix present of not and from all words you have to choose max lan

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *links[26] = {nullptr};

    bool flag = false;
    bool containsKey(char ch)
    {
        return links[ch - 'a'] != nullptr;
    }

    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }

    void setEnd()
    {
        flag = true;
    }

    bool isEnd()
    {
        return flag;
    }

    ~Node()
    {
        for (int i = 0; i < 26; i++)
        {
            if (links[i] != nullptr)
            {
                delete links[i];
                links[i] = nullptr;
            }
        }
    }
};

class Trie
{
private:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

    ~Trie()
    {
        delete root;
    }
    void insert(string word)
    {
        Node *node = root;
        for (char ch : word)
        {
            if (!node->containsKey(ch))
            {
                node->put(ch, new Node());
            }
            node = node->get(ch);
        }
        node->setEnd();
    }

    bool search(string word)
    {
        Node *node = root;
        for (char ch : word)
        {
            if (!node->containsKey(ch))
            {
                return false;
            }
            node = node->get(ch);
        }
        return node->isEnd();
    }

    bool startsWith(string prefix)
    {
        Node *node = root;
        for (char ch : prefix)
        {
            if (!node->containsKey(ch))
            {
                return false;
            }
            node = node->get(ch);
        }
        return true;
    }
    bool checkprefix(string word)
    {
        Node *node = root;

        for (char ch : word)
        {
            if (!node->containsKey(ch))
                return false;

            node = node->get(ch);

            if (!node->isEnd())
                return false;
        }

        return true;
    }
};

class Solution
{
public:
    Trie trie;
    string longestValidWord(vector<string> &words)
    {
        for (auto &it : words)
            trie.insert(it);

        string longest = "";
        for (auto &it : words)
        {
            if (trie.checkprefix(it))
            {
                if (it.length() > longest.length())
                {
                    longest = it;
                }
                else if (it.length() == longest.length() && it < longest)
                    longest = it;
            }
        }
        return longest;
    }
};
