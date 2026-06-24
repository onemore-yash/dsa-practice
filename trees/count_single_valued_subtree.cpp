// Problem: count single valued subtree
// Pattern: Postorder DFS / Tree Property Check
// Link: https://www.geeksforgeeks.org/problems/single-valued-subtree/1
// Date Solved: 03-03-2026
// Approach:
// make bool function and check left right with root and update global count

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
    bool countsinglerec(TreeNode *root, int &count)
    {
        if (!root)
            return true;
        bool left = countsinglerec(root->left, count);
        bool right = countsinglerec(root->right, count);

        if (!left || !right)
            return false;

        if (root->left && root->val != root->left->val)
            return false;

        if (root->right && root->val != root->right->val)
            return false;

        count++;
        return true;
    }

public:
    int singlevalued(TreeNode *root)
    {
        // code here
        int count = 0;
        countsinglerec(root, count);
        return count;
    }
};
