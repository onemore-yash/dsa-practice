// Problem: Implement Tries
// Pattern: Impliment Tries
// Link: https://leetcode.com/problems/implement-trie-prefix-tree/description/
// Date Solved: 27-06-2026
// Approach:
// you have to make node structure in then define one links array of size 26 and flag some function like countkeys,put,isend,get,setend
// 1)insert:in this for every char you have to check link exist not then use put and move and at then end set true
// 2)search:check containskey for every char and at the end if we reach true then return true o/w false
// 3)start with:same as search but last condition removed

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// Node Structure for Trie
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
};