// Problem: two sum in BST
// Pattern: 2sum+BST
// Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
// Date Solved: 30-03-2026
// Approach:
// use BST iterator for left and right element and chack like simple 2 sum

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class BSTiterator
{
    stack<TreeNode *> mystack;
    bool reverse = false;

public:
    BSTiterator(TreeNode *root, bool isreverse)
    {
        reverse = isreverse;
        pushAll(root);
    }
    bool hasnext()
    {
        return !mystack.empty();
    }

    int next()
    {
        TreeNode *temp = mystack.top();
        mystack.pop();
        if (!reverse)
            pushAll(temp->right);
        else
            pushAll(temp->left);
        return temp->val;
    }

private:
    void pushAll(TreeNode *node)
    {
        for (; node;)
        {
            mystack.push(node);
            if (reverse)
                node = node->right;
            else
                node = node->left;
        }
    }
};
class Solution
{
public:
    bool findTarget(TreeNode *root, int k)
    {
        if (!root)
            return false;

        BSTiterator l(root, false);
        BSTiterator r(root, true);

        int i = l.next();
        int j = r.next();
        while (i < j)
        {
            if (i + j == k)
                return true;
            else if (i + j < k)
                i = l.next();
            else
                j = r.next();
        }
        return false;
    }
};