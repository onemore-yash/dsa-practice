// Problem: construct BT from post and in order
// Pattern: construction of BT
// Link: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/
// Date Solved: 11-03-2026
// Approach:
// same as pre+in but here make root last of post and limits

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
    TreeNode *build(vector<int> &inorder, int instart, int inend, vector<int> &postorder, int postart, int poend, map<int, int> &inmap)
    {
        if (instart > inend || postart > poend)
            return NULL;

        TreeNode *root = new TreeNode(postorder[poend]);

        int inroot = inmap[root->val];
        int numsleft = inroot - instart;

        root->left = build(inorder, instart, inroot - 1, postorder, postart, postart + numsleft - 1, inmap);
        root->right = build(inorder, inroot + 1, inend, postorder, postart + numsleft, poend - 1, inmap);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        map<int, int> inmap;
        for (int i = 0; i < inorder.size(); i++)
        {
            inmap[inorder[i]] = i;
        }

        return build(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, inmap);
    }
};
