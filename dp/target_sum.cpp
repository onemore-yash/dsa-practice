// Problem: Target Sum
// Pattern: dp+sequence
// Link: https://leetcode.com/problems/target-sum/description/
// Date Solved: 13-04-2026
// Approach:
// make a formula of newtarget and simple use dp

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int sum = 0;
        for (int x : nums)
            sum += x;

        if (sum < abs(target) || (sum + target) % 2 != 0)
            return 0;

        int t = (sum + target) / 2;

        vector<int> dp(t + 1, 0);

        dp[0] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int tar = t; tar >= nums[i]; tar--)
            {

                dp[tar] += dp[tar - nums[i]];
            }
        }
        return dp[t];
    }
};