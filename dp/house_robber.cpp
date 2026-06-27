// Problem: House Robber
// Pattern: dp+take/not-take
// Link: https://leetcode.com/problems/house-robber/description/
// Date Solved: 07-04-2026
// Approach:
// same logic but at each step we have two opetions either take or not take then we choose max from them

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

        for (int i = 1; i < nums.size(); i++)
        {
            int include = prev2 + nums[i];
            int exclude = prev;

            int cur = max(include, exclude);
            prev2 = prev;
            prev = cur;
        }
        return max(prev2, prev);
    }
};
