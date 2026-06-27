// Problem: Longest common palindrom
// Pattern: dp on string(lcs type)
// Link: https://leetcode.com/problems/longest-palindromic-subsequence/description/
// Date Solved: 01-06-2026
// Approach:
// same as LCS

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {
        int n = s.length();

        vector<int> dp(n, 0);
        dp[0] = 1;
        for (int j = 1; j < n; j++)
        {
            dp[j] = 1;
            int diag = 0;
            for (int i = j - 1; i >= 0; i--)
            {
                int temp = dp[i];
                if (s[i] != s[j])
                    dp[i] = max(dp[i + 1], dp[i]);
                else
                    dp[i] = 2 + diag;
                diag = temp;
            }
        }
        return dp[0];
    }
};