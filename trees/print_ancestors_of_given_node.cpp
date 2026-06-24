// Problem: print ancestors of given node
// Pattern: LCA type/root to path type
// Link: https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1
// Date Solved: 09-03-2026
// Approach:
// make a bool function which check either it currently in right or left if one  of  them is true then add that in globle vector else return false and check for children

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
