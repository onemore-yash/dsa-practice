// Problem: BST iterator
// Pattern: construct BST
// Link: https://leetcode.com/problems/binary-search-tree-iterator/
// Date Solved: 28-03-2026
// Approach:
// use stack in first we put all left of stack then every time we call next then we put all left of top->right from stack

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
class BSTIterator
{
public:
    stack<TreeNode *> st;
    void pushLeft(TreeNode *node)
    {
        while (node)
        {
            st.push(node);
            node = node->left;
        }
    }
    BSTIterator(TreeNode *root)
    {
        pushLeft(root);
    }

    int next()
    {
        TreeNode *node = st.top();
        st.pop();

        pushLeft(node->right);

        return node->val;
    }

    bool hasNext()
    {
        return !st.empty();
    }
};