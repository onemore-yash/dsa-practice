// Problem: number of LIS
// Pattern: dp on LIS
// Link: https://leetcode.com/problems/number-of-longest-increasing-subsequence/description/
// Date Solved: 06-06-2026
// Approach:
// make a count array and every time if curr element is less than 1+prev then simply inherete and if curr==prev+1 then do cnt[i]+=cnt[j] and at the end sum all whose length is equal to maxi

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)
class Solution
{
public:
    int findNumberOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, 1), cnt(n, 1);
        int maxi = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (dp[i] < dp[j] + 1 && nums[i] > nums[j])
                {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                }
                else if (dp[i] == dp[j] + 1 && nums[i] > nums[j])
                {
                    cnt[i] += cnt[j];
                }
            }
            maxi = max(maxi, dp[i]);
        }

        int nos = 0;
        for (int i = 0; i < n; i++)
        {
            if (dp[i] == maxi)
                nos += cnt[i];
        }
        return nos;
    }
};
