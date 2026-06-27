// Problem: subset II
// Pattern: backtracking+take/not take
// Link: https://leetcode.com/problems/subsets-ii/description/
// Date Solved: 04-04-2026
// Approach:
// sort given array ,create new function for backtracking which just do backtrack with ith element and skip same elements then without it

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, res, subset);
        return res;
    }

private:
    void backtrack(vector<int> &nums, int i, vector<vector<int>> &res, vector<int> &subset)
    {
        if (i == nums.size())
        {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        backtrack(nums, i + 1, res, subset);
        subset.pop_back();

        while (i + 1 < nums.size() && nums[i] == nums[i + 1])
            i++;

        backtrack(nums, i + 1, res, subset);
    }
};