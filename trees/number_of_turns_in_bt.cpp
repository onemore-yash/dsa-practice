// Problem: number of turns in BT
// Pattern: LCA+path analysis
// Link: https://www.geeksforgeeks.org/problems/number-of-turns-in-binary-tree/1
// Date Solved: 13-03-2026
// Approach:
// we need to find LCA then count turns from lca to both a and b and also we need to put condition in main function that if either lca is a or b or neither then from that we call dfs function to count turns from lca to a and lca to b in dfs we have parent direction we call for left and right and check if direction is changed or not

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

    TreeNode *LCA(TreeNode *root, int a, int b)
    {
        if (!root || root->val == a || root->val == b)
            return root;

        TreeNode *left = LCA(root->left, a, b);
        TreeNode *right = LCA(root->right, a, b);

        if (left && right)
            return root;

        return left ? left : right;
    }

    int dfs(TreeNode *root, int target, int dir, int &turns)
    {
        if (!root)
            return -1;
        if (root->val == target)
            return 0;

        int left = dfs(root->left, target, 0, turns);
        int right = dfs(root->right, target, 1, turns);

        if (left != -1)
        {
            if (dir == 1)
                turns++;
            return left + 1;
        }
        if (right != -1)
        {
            if (dir == 0)
                turns++;
            return right + 1;
        }

        return -1;
    }

public:
    // function should return the number of turns required to go from first node to
    // second node
    int NumberOFTurns(struct TreeNode *root, int a, int b)
    {
        // Your code goes here
        TreeNode *lca = LCA(root, a, b);

        int turns = 0;

        if (lca->val == a)
        {
            dfs(lca->left, b, 0, turns);
            dfs(lca->right, b, 1, turns);
        }

        else if (lca->val == b)
        {
            dfs(lca->left, a, 0, turns);
            dfs(lca->right, a, 1, turns);
        }

        else
        {
            turns = 1;
            dfs(lca->left, a, 0, turns);
            dfs(lca->right, a, 1, turns);

            dfs(lca->left, b, 0, turns);
            dfs(lca->right, b, 1, turns);
        }

        if (turns == 0)
            return -1;

        return turns;
    }
};
