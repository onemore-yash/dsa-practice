// Problem: Combination sum II
// Pattern: backtracking+for-loop
// Link: https://leetcode.com/problems/combination-sum-ii/description/
// Date Solved: 05-04-2026
// Approach:
// just combine logic of 52 and 49

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> res;
        vector<int> subset;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0, 0, res, subset);

        return res;
    }
    void backtrack(vector<int> &candidates, int &target, int sum, int i, vector<vector<int>> &res, vector<int> &subset)
    {
        if (i >= candidates.size())
        {
            if (sum == target)
                res.push_back(subset);
            return;
        }
        if (sum > target)
            return;

        subset.push_back(candidates[i]);
        backtrack(candidates, target, sum + candidates[i], i + 1, res, subset);

        subset.pop_back();
        while (i < candidates.size() - 1 && candidates[i] == candidates[i + 1])
            i++;
        backtrack(candidates, target, sum, i + 1, res, subset);
    }
};