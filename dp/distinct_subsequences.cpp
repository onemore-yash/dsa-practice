// Problem: Distinct subsequences
// Pattern: dp on string(string matching)
// Link: https://leetcode.com/problems/distinct-subsequences/description/
// Date Solved: 01-06-2026
// Approach:
// use simple dp and take care of variable type

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int numDistinct(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        vector<unsigned long long> dp(m + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            vector<unsigned long long> temp(m + 1, 0);
            temp[0] = 1;
            for (int j = 1; j <= m; j++)
            {
                if (s[i - 1] == t[j - 1])
                {
                    temp[j] = dp[j - 1] + dp[j];
                }
                else
                {
                    temp[j] = dp[j];
                }
            }
            dp = temp;
        }
        return dp[m];
    }
};
