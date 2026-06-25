// Problem: max path sum between to leaves
// Pattern: BT DP
// Link: https://www.geeksforgeeks.org/problems/maximum-path-sum/1
// Date Solved: 13-03-2026
// Approach:
// here we make a recur function which return best path with root and in this function we find for left and right and check if there exist both children (because then only we can connect 2 leaves) then do change in globle variable (and also there is special case when there is only either right or left subtree then we need to return max(val,sum))

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
    int dfs(TreeNode *root, int &maxii)
    {
        if (!root)
            return 0;

        int lefti = dfs(root->left, maxii);
        int righti = dfs(root->right, maxii);

        if (root->left != NULL && root->right != NULL)
        {
            maxii = max(maxii, root->val + lefti + righti);
            return root->val + max(lefti, righti);
        }
        return root->val + (root->left == NULL ? righti : lefti);
    }

public:
    int maxPathSum(TreeNode *root)
    {
        // code here
        int maxii = INT_MIN;
        int val = dfs(root, maxii);
        if (root->right && root->left)
            return maxii;
        return max(maxii, val);
    }
};
