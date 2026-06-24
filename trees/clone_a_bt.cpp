// Problem: clone a BT
// Pattern: hashmap mapping/ graph cloning
// Link: https://www.geeksforgeeks.org/problems/clone-a-binary-tree/1
// Date Solved: 14-03-2026
// Approach:
// here each node have 3 pointers we need to make sure that left ,right is copied and random pointer points to correct cloned nodes not original for this we use hashmap(original node-> cloned node if node already exiast in map then simply return cloned val of that node otherwise create new node and store it in map and recursivly point all left,right and rendom)

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
