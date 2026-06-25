// Problem: kth largest in BST with O(1) space
// Pattern: morrise traverasl
// Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/
// Date Solved: 15-03-2026
// Approach:
// use morrise traversal but in reverse order

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
    int kthSmallest(TreeNode *root, int k)
    {
        int count = 0;
        int ans = -1;

        TreeNode *cur = root;
        TreeNode *pre = NULL;

        while (cur)
        {
            if (!cur->left)
            {
                count++;
                if (count == k)
                    ans = cur->val;
                cur = cur->right;
            }
            else
            {
                pre = cur->left;

                while (pre->right && pre->right != cur)
                    pre = pre->right;

                if (!pre->right)
                {
                    // create thread
                    pre->right = cur;
                    cur = cur->left;
                }
                else
                {
                    // remove thread
                    pre->right = NULL;

                    count++;
                    if (count == k)
                        ans = cur->val;

                    cur = cur->right;
                }
            }
        }

        return ans;
    }
};