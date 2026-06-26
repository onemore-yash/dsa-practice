// Problem: subset I
// Pattern: backtracking+take/not take
// Link: https://leetcode.com/problems/subsets/description/
// Date Solved: 04-04-2026
// Approach:
// create new function for backtracking which just do backtrack with ith element and without

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> subset;

        temp(nums, 0, res, subset);
        return res;
    }
    void temp(vector<int> &nums, int i, vector<vector<int>> &res, vector<int> &subset)
    {
        if (i == nums.size())
        {
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        temp(nums, i + 1, res, subset);

        subset.pop_back();
        temp(nums, i + 1, res, subset);
    }
};
