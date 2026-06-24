// Problem: vertical order traversal
// Pattern: lavel order variation
// Link: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/?envType=problem-list-v2&envId=binary-tree
// Date Solved: 06-03-2026
// Approach:
// use bfs with map<int,map<int,multiset<int>>>  here use multiset because at any perticular point there exist many node with same value

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
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode *, pair<int, int>>> q;

        q.push({root, {0, 0}});

        while (!q.empty())
        {
            auto p = q.front();
            q.pop();
            TreeNode *node = p.first;
            int row = p.second.first;
            int col = p.second.second;

            nodes[col][row].insert(node->val);

            if (node->left)
                q.push({node->left, {row + 1, col - 1}});
            if (node->right)
                q.push({node->right, {row + 1, col + 1}});
        }

        vector<vector<int>> ans;
        for (auto p : nodes)
        {
            vector<int> col_vec;
            for (auto q : p.second)
            {
                col_vec.insert(col_vec.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col_vec);
        }
        return ans;
    }
};