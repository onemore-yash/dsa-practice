// Problem: left view
// Pattern: lavel order variation
// Link: Not noted - add link here
// Date Solved: 06-03-2026
// Approach:
// same as right view but left then right

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
    vector<int> leftSideView(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
            return ans;
        map<int, int> mp;
        queue<pair<int, TreeNode *>> q;
        q.push({0, root});
        while (!q.empty())
        {
            TreeNode *temp = q.front().second;
            int x = q.front().first;
            q.pop();
            if (mp.find(x) == mp.end())
            {
                mp[x] = temp->val;
            }
            if (temp->left)
            {
                q.push({x + 1, temp->left});
            }
            if (temp->right)
            {
                q.push({x + 1, temp->right});
            }
        }
        for (int i = 0; i < mp.size(); i++)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};
