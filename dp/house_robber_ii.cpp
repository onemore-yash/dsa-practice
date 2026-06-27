// Problem: House Robber II
// Pattern: dp+take/not-take in cycle
// Link: https://leetcode.com/problems/house-robber-ii/description/
// Date Solved: 08-04-2026
// Approach:
// here we have to divide it in 2 parts first exclude first and in second exclude last then solve same as 63

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int prev = nums[0];
        int prev2 = 0;
        int consider;
        int notconsider;
        int maxi;
        int n = nums.size();
        if (n == 1)
            return nums[0];
        for (int i = 1; i < n - 1; i++)
        {
            consider = prev2 + nums[i];
            notconsider = prev;
            maxi = max(consider, notconsider);

            prev2 = prev;
            prev = maxi;
        }
        int ans1 = max(prev, prev2);
        prev = nums[1];
        prev2 = 0;
        for (int i = 2; i < n; i++)
        {
            consider = prev2 + nums[i];
            notconsider = prev;
            maxi = max(consider, notconsider);

            prev2 = prev;
            prev = maxi;
        }
        int ans2 = max(prev, prev2);
        return max(ans1, ans2);
    }
};