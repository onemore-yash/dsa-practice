// Problem: min cost to cut a stick
// Pattern: MCM dp
// Link: https://leetcode.com/problems/minimum-cost-to-cut-a-stick/description/
// Date Solved: 06-06-2026
// Approach:
// same as 108 just change little in condition

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int minCost(int n, vector<int> &cuts)
    {
        cuts.push_back(0);
        cuts.push_back(n);

        sort(cuts.begin(), cuts.end());

        int c = cuts.size();

        vector<vector<int>> dp(c, vector<int>(c, 0));

        for (int i = c - 1; i >= 0; i--)
        {
            for (int j = i + 2; j < c; j++)
            {
                if (i > j)
                    continue;
                int mini = 1e9;
                for (int k = i + 1; k < j; k++)
                {
                    int cost = cuts[j] - cuts[i] + dp[i][k] + dp[k][j];
                    if (cost < mini)
                        mini = cost;
                }
                dp[i][j] = mini;
            }
        }
        return dp[0][c - 1];
    }
};
