// Problem: maximum width of BT
// Pattern: BFS+indexing
// Link: https://leetcode.com/problems/maximum-width-of-binary-tree/submissions/1939897367/
// Date Solved: 06-03-2026
// Approach:
// use BFS and at every level find last and first index and every time check max

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
    int widthOfBinaryTree(TreeNode *root)
    {
        int ans = 0;

        if (!root)
            return 0;

        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            int x = q.front().second;
            int n = q.size();
            long long first = 0;
            long long last = 0;

            for (int i = 0; i < n; i++)
            {
                long long curr = q.front().second - x;
                TreeNode *t = q.front().first;
                q.pop();
                if (i == 0)
                    first = curr;
                if (i == n - 1)
                    last = curr;

                if (t->left)
                    q.push({t->left, 2 * curr + 1});
                if (t->right)
                    q.push({t->right, 2 * curr + 2});
            }
            ans = max(ans, (int)(last - first + 1));
        }
        return ans;
    }
};
