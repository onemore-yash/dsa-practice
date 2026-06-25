// Problem: Unique BSTs
// Pattern: BST+DP
// Link: https://leetcode.com/problems/unique-binary-search-trees/description/?envType=problem-list-v2&envId=binary-tree
// Date Solved: 31-03-2026
// Approach:
// just use catalan numbers

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
    long long Combination(int n, int r)
    {
        if (n - r < r)
        {
            r = n - r;
        }
        long long res = 1;
        for (int i = 0; i < r; i++)
        {
            res *= (n - i);
            res /= (i + 1);
        }
        return res;
    }

public:
    int numTrees(int n)
    {
        long long x = Combination(2 * n, n);

        return x / (n + 1);
    }
};
