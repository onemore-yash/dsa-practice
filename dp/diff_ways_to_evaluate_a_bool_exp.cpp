// Problem: diff ways to evaluate a bool exp
// Pattern: MCM dp
// Link: https://www.geeksforgeeks.org/problems/boolean-parenthesization5610/1
// Date Solved: 07-06-2026
// Approach:
// dp[i][j][isTrue] stores the number of ways to parenthesize the substring exp[i...j] so that it evaluates to True/False.
// For every operator between i and j, split into left and right parts, get (lT, lF, rT, rF), and combine them according to the operator's truth table (&, |, ^).
// Fill DP for increasing substring lengths (or use i from n-1 → 0 and j from i → n-1) so that smaller subproblems are already computed before larger ones.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countWays(string &s)
    {
        int n = s.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2)));

        for (int i = n - 1; i >= 0; i -= 2)
        {
            for (int j = i; j < n; j += 2)
            {
                if (i == j)
                {
                    dp[i][j][true] = s[i] == 'T';
                    dp[i][j][false] = s[i] == 'F';
                    continue;
                }
                for (int k = i + 1; k < j; k += 2)
                {
                    int lt = dp[i][k - 1][true],
                        lf = dp[i][k - 1][false],
                        rt = dp[k + 1][j][true],
                        rf = dp[k + 1][j][false];

                    if (s[k] == '&')
                        dp[i][j][true] += lt * rt,
                            dp[i][j][false] += lf * rf + lt * rf + lf * rt;
                    else if (s[k] == '|')
                        dp[i][j][true] += lt * rt + lt * rf + lf * rt,
                            dp[i][j][false] += lf * rf;
                    else if (s[k] == '^')
                        dp[i][j][true] += lt * rf + lf * rt,
                            dp[i][j][false] += lf * rf + lt * rt;
                }
            }
        }

        return dp[0][n - 1][true];
    }
};