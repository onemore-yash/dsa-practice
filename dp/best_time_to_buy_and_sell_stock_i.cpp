// Problem: Best time to buy and sell stock I
// Pattern: dp on stocks
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Date Solved: 02-06-2026
// Approach:
// use a mini pointer and run for loop

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mini = prices[0];
        int maxi = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            int cost = prices[i] - mini;
            maxi = max(maxi, cost);
            mini = min(mini, prices[i]);
        }
        return maxi;
    }
};
