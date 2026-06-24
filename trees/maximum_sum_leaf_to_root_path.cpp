// Problem: maximum sum leaf to root path
// Pattern: backtracking/dfs+global max
// Link: https://www.geeksforgeeks.org/problems/maximum-sum-leaf-to-root-path/1
// Date Solved: 09-03-2026
// Approach:
// do dfs and maintain maxsum by check if curr node is leaf or not and call for left and right

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

    void solve(TreeNode *root, int cursum, int &max_sum)
    {
        if (!root)
            return;

        cursum += root->val;
        if (root->left == nullptr && root->right == nullptr)
        {

            if (cursum > max_sum)
            {
                max_sum = cursum;
            }
        }
        solve(root->left, cursum, max_sum);
        solve(root->right, cursum, max_sum);
    }

public:
    int maxPathSum(TreeNode *root)
    {
        // code here
        if (!root)
            return 0;
        int max_sum = INT_MIN;

        solve(root, 0, max_sum);

        return max_sum;
    }
};