// Problem: maximum sum BST in BT
// Pattern: postorder + DP
// Link: https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/description/
// Date Solved: 31-03-2026
// Approach:
// we have to make a structure which carry isBST,sum,maxval and minval and then we have to do post order traversal of this structure sunction

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
    int ans = 0;

    struct Info
    {
        bool isBST;
        int sum;
        int minVal;
        int maxVal;
    };

    Info solve(TreeNode *root)
    {
        if (!root)
            return {true, 0, INT_MAX, INT_MIN};

        auto left = solve(root->left);
        auto right = solve(root->right);

        if (left.isBST && right.isBST &&
            root->val > left.maxVal && root->val < right.minVal)
        {

            int currSum = left.sum + right.sum + root->val;
            ans = max(ans, currSum);

            return {
                true,
                currSum,
                min(root->val, left.minVal),
                max(root->val, right.maxVal)};
        }

        return {false, 0, 0, 0};
    }

    int maxSumBST(TreeNode *root)
    {
        solve(root);
        return ans;
    }
};
