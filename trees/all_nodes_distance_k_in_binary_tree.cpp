// Problem: all nodes distance k in binary tree
// Pattern: bfs+convert to undirected like graph structure
// Link: https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/
// Date Solved: 09-03-2026
// Approach:
// first we need to make a map structure which store parent nodes and after that do bfs traversal than chack k distance and make visited set

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
