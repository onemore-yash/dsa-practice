// Problem: Largest divisible subset
// Pattern: dp on LIS
// Link: https://leetcode.com/problems/largest-divisible-subset/
// Date Solved: 06-06-2026
// Approach:
// use same as 101 but change one condition and sort the arr

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> dp(n, 1);
        vector<int> parent(n);

        int maxi = 1, last = 0;

        for (int i = 0; i < n; i++)
        {
            parent[i] = i;

            for (int j = 0; j < i; j++)
            {
                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i])
                {

                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }

            if (dp[i] > maxi)
            {
                maxi = dp[i];
                last = i;
            }
        }

        vector<int> ans;
        ans.push_back(nums[last]);

        while (parent[last] != last)
        {
            last = parent[last];
            ans.push_back(nums[last]);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
