// Problem: time taken to burning a BT from any node
// Pattern: graph+bfs
// Link: Not noted - add link here
// Date Solved: 13-03-2026
// Approach:
// first we have to make reverse means parent mapping so by lavel order traversal we return address of target and make a map which contain parent mapping then do bfs using visited map and each time increase time and return it

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
