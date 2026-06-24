// Problem: k sum path
// Pattern: prefix sum+hashmap
// Link: https://www.geeksforgeeks.org/problems/k-sum-paths/1
// Date Solved: 13-03-2026
// Approach:
// here for each node  visit node,update currsum,check valid path,add prefix sum,go left,go right,remove prefix sum

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
