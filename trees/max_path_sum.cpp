// Problem: max path sum
// Pattern: Tree DP (Global Maximum Path)
// Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/submissions/1936724378/
// Date Solved: 03-03-2026
// Approach:
// use dfs for left and right max height for every node and Update global max sum considering node as turning point and Return the best one-sided path sum

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
    int dfs(TreeNode *root, int &maxsum)
    {
        if (!root)
            return 0;

        int left = max(0, dfs(root->left, maxsum));
        int right = max(0, dfs(root->right, maxsum));

        maxsum = max(maxsum, left + right + root->val);

        return max(left, right) + root->val;
    }

public:
    int maxPathSum(TreeNode *root)
    {
        int maxsum = INT_MIN;
        dfs(root, maxsum);
        return maxsum;
    }
};
