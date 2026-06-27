// Problem: Combination sum
// Pattern: backtracking+take/not take
// Link: https://leetcode.com/problems/combination-sum/description/
// Date Solved: 04-04-2026
// Approach:
// same as before but here you have 2 choices either you take element then stay at same index oherwise i+1 when sum>target or i>=size then return aslo base case when targer== sum then take  and return

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> res;
        vector<int> subset;
        backtrack(candidates, target, 0, 0, res, subset);
        return res;
    }

    void backtrack(vector<int> &candidates, int &target, int i, int sum, vector<vector<int>> &res, vector<int> &subset)
    {
        if (sum == target)
        {
            res.push_back(subset);
            return;
        }
        if (i >= candidates.size() || sum > target)
            return;
        subset.push_back(candidates[i]);
        backtrack(candidates, target, i, sum + candidates[i], res, subset);

        subset.pop_back();
        backtrack(candidates, target, i + 1, sum, res, subset);
    }
};
