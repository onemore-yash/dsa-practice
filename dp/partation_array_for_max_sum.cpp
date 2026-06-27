// Problem: partation array for max sum
// Pattern: partation dp
// Link: https://leetcode.com/problems/partition-array-for-maximum-sum/
// Date Solved: 07-06-2026
// Approach:
// same as 112

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int f(int i, vector<int> &nums, int k, vector<int> &dp)
    {
        if (i == nums.size())
            return 0;
        int n = nums.size();
        if (dp[i] != -1)
            return dp[i];
        int len = 0;
        int maxi = INT_MIN;
        int maxans = INT_MIN;

        for (int j = i; j < min(i + k, n); j++)
        {
            len++;
            maxi = max(maxi, nums[j]);
            int sum = len * maxi + f(j + 1, nums, k, dp);
            maxans = max(maxans, sum);
        }
        return dp[i] = maxans;
    }

public:
    int maxSumAfterPartitioning(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> dp(n + 1, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            int len = 0;
            int maxi = INT_MIN;
            int maxans = INT_MIN;

            for (int j = i; j < min(i + k, n); j++)
            {
                len++;
                maxi = max(maxi, nums[j]);
                int sum = len * maxi + dp[j + 1];
                maxans = max(maxans, sum);
            }
            dp[i] = maxans;
        }
        return dp[0];
    }
};