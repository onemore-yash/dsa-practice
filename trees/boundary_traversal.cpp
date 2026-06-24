// Problem: boundary Traversal
// Pattern: lavel order variation
// Link: https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
// Date Solved: 03-03-2026
// Approach:
// make functions of collect left right and leaves(use morris traversal)

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
    bool isLeaf(TreeNode *node)
    {
        return node->left == nullptr && node->right == nullptr;
    }

    void collectLeft(TreeNode *root, vector<int> &res)
    {
        if (!root)
            return;
        TreeNode *curr = root;
        while (!isLeaf(curr))
        {
            res.push_back(curr->val);
            if (curr->left)
                curr = curr->left;
            else
                curr = curr->right;
        }
        return;
    }

    void collectRight(TreeNode *root, vector<int> &res)
    {
        if (root == nullptr)
            return;

        TreeNode *curr = root;
        vector<int> temp;
        while (!isLeaf(curr))
        {

            temp.push_back(curr->val);

            if (curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }
        for (int i = temp.size() - 1; i >= 0; --i)
            res.push_back(temp[i]);
    }

    void collectLeaves(TreeNode *root, vector<int> &res)
    {
        TreeNode *cur = root;

        while (cur)
        {
            if (!cur->left)
            {
                if (!cur->right)
                    res.push_back(cur->val);
                cur = cur->right;
            }
            else
            {
                TreeNode *pre = cur->left;
                while (pre->right && pre->right != cur)
                {
                    pre = pre->right;
                }
                if (!pre->right)
                {
                    pre->right = cur;
                    cur = cur->left;
                }
                else
                {

                    // If it's predecessor is a leaf node
                    if (pre->left == nullptr)
                        res.push_back(pre->val);

                    pre->right = nullptr;
                    cur = cur->right;
                }
            }
        }
    }

public:
    vector<int> boundaryTraversal(TreeNode *root)
    {
        vector<int> res;

        if (!root)
            return res;

        // Add root val if it's not a leaf
        if (!isLeaf(root))
            res.push_back(root->val);

        // Collect left boundary
        collectLeft(root->left, res);

        // Collect leaf nodes
        collectLeaves(root, res);

        // Collect right boundary
        collectRight(root->right, res);

        return res;
    }
};