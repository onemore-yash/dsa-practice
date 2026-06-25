// Problem: balance a BST
// Pattern: construct BST
// Link: https://www.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1
// Date Solved: 15-03-2026
// Approach:
// from inorder traversal find sorted vector and then build BST

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
    vector<int> inorder(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
            return ans;
        stack<TreeNode *> st;
        st.push(root);
        while (!st.empty())
        {
            TreeNode *t = st.top();
            st.pop();
            ans.push_back(t->val);
            if (t->left)
                st.push(t->left);
            if (t->right)
                st.push(t->right);
        }
        return ans;
    }
    TreeNode *sortedArrayToBSTRecur(vector<int> &arr, int start, int end)
    {
        if (start > end)
            return nullptr;

        int mid = start + (end - start) / 2;
        TreeNode *root = new TreeNode(arr[mid]);
        root->left = sortedArrayToBSTRecur(arr, start, mid - 1);
        root->right = sortedArrayToBSTRecur(arr, mid + 1, end);
        return root;
    }

public:
    TreeNode *balanceBST(TreeNode *root)
    {
        // Code here
        vector<int> inorderr = inorder(root);
        return sortedArrayToBSTRecur(inorderr, 0, inorderr.size() - 1);
    }
};