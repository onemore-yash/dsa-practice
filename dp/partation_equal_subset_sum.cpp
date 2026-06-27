// Problem: partation equal subset sum
// Pattern: dp+sequence
// Link: https://leetcode.com/problems/partition-equal-subset-sum/description/
// Date Solved: 10-04-2026
// Approach:
// find you have to find sum of all num and check it is even or not if odd then return false otherwise 1)you can use 71 with target sum/2 2) you can use a backward method (because we need each element only one time ) and every time we have to take or or target and target -num(dp[target]=dp[target]||dp[target-num])

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        if (nums.empty())
            return false;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        if (sum % 2 != 0)
            return false;

        vector<bool> dp(sum / 2 + 1, false);
        dp[0] = true;
        for (int i : nums)
        {
            for (int target = sum / 2; target >= i; target--)
            {
                dp[target] = dp[target] || dp[target - i];
            }
        }
        return dp[sum / 2];
    }
};