// Problem: Longest string chain
// Pattern: dp on LIS
// Link: https://leetcode.com/problems/longest-string-chain/description/
// Date Solved: 06-06-2026
// Approach:
// same as 101 but just sort word array and change one condition

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool check(string &s1, string &s2)
    {
        if (s1.size() != s2.size() + 1)
            return false;
        int i = 0, j = 0;
        while (i < s1.size())
        {
            if (s1[i] == s2[j] && j < s2.size())
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }

        return j == s2.size();
    }

public:
    int longestStrChain(vector<string> &arr)
    {

        sort(arr.begin(), arr.end(), [](string &a, string &b)
             { return a.size() < b.size(); });
        int n = arr.size();
        vector<int> dp(n, 1);
        int maxi = 1;
        for (int i = 0; i < n; i++)
        {
            for (int p = 0; p < i; p++)
            {
                if (check(arr[i], arr[p]) && dp[i] < 1 + dp[p])
                {
                    dp[i] = 1 + dp[p];
                }
            }
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
};