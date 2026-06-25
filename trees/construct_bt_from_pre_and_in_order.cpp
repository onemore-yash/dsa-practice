// Problem: construct BT from pre and in order
// Pattern: construction of BT
// Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/submissions/1943923613/
// Date Solved: 10-03-2026
// Approach:
// from pre order we find the root and we make map of inorder then make a function for build tree we first make root then recursivly make left a nd right

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
class Solution
{
    TreeNode *build(vector<int> &preorder, int prestart, int preend, vector<int> &inorder, int instart, int inend, unordered_map<int, int> &mp)
    {
        if (prestart > preend || instart > inend)
            return NULL;

        TreeNode *root = new TreeNode(preorder[prestart]);
        int inroot = mp[root->val];
        int numlefts = inroot - instart;

        root->left = build(preorder, prestart + 1, prestart + numlefts, inorder, instart, inroot - 1, mp);
        root->right = build(preorder, prestart + numlefts + 1, preend, inorder, inroot + 1, inend, mp);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {

        unordered_map<int, int> mp;

        for (int i = 0; i < inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }
        return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
    }
};
