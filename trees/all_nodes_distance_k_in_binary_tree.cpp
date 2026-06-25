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
    void parentmake(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parentmap)
    {
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            if (node->left)
            {
                parentmap[node->left] = node;
                q.push(node->left);
            }

            if (node->right)
            {
                parentmap[node->right] = node;
                q.push(node->right);
            }
        }
    }
    vector<int> bfsFromTarget(TreeNode *target, unordered_map<TreeNode *, TreeNode *> &parentmap, int k)
    {
        queue<TreeNode *> q;
        unordered_set<TreeNode *> visited;

        q.push(target);
        visited.insert(target);
        int currlevel = 0;

        while (!q.empty())
        {
            int n = q.size();

            if (currlevel++ == k)
                break;

            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                if (node->left && visited.find(node->left) == visited.end())
                {
                    visited.insert(node->left);
                    q.push(node->left);
                }

                if (node->right && visited.find(node->right) == visited.end())
                {
                    visited.insert(node->right);
                    q.push(node->right);
                }
                if (parentmap.count(node) && visited.find(parentmap[node]) == visited.end())
                {
                    visited.insert(parentmap[node]);
                    q.push(parentmap[node]);
                }
            }
        }
        vector<int> result;
        while (!q.empty())
        {
            result.push_back(q.front()->val);
            q.pop();
        }

        return result;
    }

public:
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        vector<int> ans;
        if (!root)
            return ans;
        unordered_map<TreeNode *, TreeNode *> parentmap;
        parentmake(root, parentmap);

        return bfsFromTarget(target, parentmap, k);
    }
};
