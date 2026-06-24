// Problem: Zig Zag Traversal
// Pattern: lavel order variation
// Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
// Date Solved: 03-03-2026
// Approach:
// use level order with boolean

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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;

        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            vector<int> t;
            for (int i = 0; i < n; i++)
            {
                TreeNode *x = q.front();
                q.pop();
                t.push_back(x->val);
                if (x->left)
                    q.push(x->left);
                if (x->right)
                    q.push(x->right);
            }
            ans.push_back(t);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            if (i % 2 == 1)
                reverse(ans[i].begin(), ans[i].end());
        }
        return ans;
    }
};