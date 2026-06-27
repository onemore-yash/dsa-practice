// Problem: min cost climbing stairs(you can jump 1 to k(given))
// Pattern: dp+min+for-loop
// Link: Not noted - add link here
// Date Solved: 07-04-2026
// Approach:
// same logic but at each index  we need to find min by for loop

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solveUtil(int n, vector<int> &height, vector<int> &dp, int k)
    {
        dp[0] = 0;

        for (int i = 1; i < n; i++)
        {
            int mmSteps = INT_MAX;

            for (int j = 1; j <= k; j++)
            {
                if (i - j >= 0)
                {
                    int jump = dp[i - j] + abs(height[i] - height[i - j]);
                    mmSteps = min(mmSteps, jump);
                }
            }

            dp[i] = mmSteps;
        }

        return dp[n - 1];
    }

    int solve(int n, vector<int> &height, int k)
    {
        vector<int> dp(n, -1);
        return solveUtil(n, height, dp, k);
    }
};
