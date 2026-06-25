// Problem: clone a BT
// Pattern: hashmap mapping/ graph cloning
// Link: https://www.geeksforgeeks.org/problems/clone-a-binary-tree/1
// Date Solved: 14-03-2026
// Approach:
// here each node have 3 pointers we need to make sure that left ,right is copied and random pointer points to correct cloned nodes not original for this we use hashmap(original node-> cloned node if node already exiast in map then simply return cloned val of that node otherwise create new node and store it in map and recursivly point all left,right and rendom)

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node *random;
};

class Solution
{
    Node *cloneTreeHelper(Node *node, unordered_map<Node *, Node *> &cloneMap)
    {
        if (!node)
            return NULL;
        if (cloneMap.find(node) != cloneMap.end())
        {
            return cloneMap[node];
        }
        Node *newClone = new Node();
        newClone->data = node->data;
        cloneMap[node] = newClone;
        newClone->left = cloneTreeHelper(node->left, cloneMap);
        newClone->right = cloneTreeHelper(node->right, cloneMap);
        newClone->random = cloneTreeHelper(node->random, cloneMap);

        return newClone;
    }

public:
    /* The function should clone the passed tree and return
       root of the cloned tree */
    Node *cloneTree(Node *root)
    {
        // Your code here
        unordered_map<Node *, Node *> cloneMap;
        return cloneTreeHelper(root, cloneMap);
    }
};