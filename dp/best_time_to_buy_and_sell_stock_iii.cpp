// Problem: Best time to buy and sell stock III
// Pattern: dp on stocks
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/
// Date Solved: 02-06-2026
// Approach:
// use simple dp where 3 index(index,buy,cap) and take care of 4 ways(2 for buy and 2 for sell )

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<int>> after(2, vector<int>(3, 0));
        vector<vector<int>> cur(2, vector<int>(3, 0));

        // writing base case make no sense

        for (int i = n - 1; i >= 0; i--)
        {
            for (int d = 0; d <= 1; d++)
            {
                for (int cap = 1; cap <= 2; cap++)
                { // can also start from 0 but no sense
                    if (d)
                    {
                        cur[d][cap] = max(-prices[i] + after[0][cap], after[1][cap]);
                    }
                    else
                    {
                        cur[d][cap] = max(prices[i] + after[1][cap - 1], after[0][cap]);
                    }
                }
            }
            after = cur;
        }

        return after[1][2];
    }
};
