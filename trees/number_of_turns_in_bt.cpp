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
public:
};
