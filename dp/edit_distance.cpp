// Problem: Edit distance
// Pattern: dp on string(string matching)
// Link: https://leetcode.com/problems/edit-distance/description/
// Date Solved: 01-06-2026
// Approach:
// use simple dp and take care conditions

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDistance(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        vector<int> dp(m + 1, 0);
        for (int j = 0; j <= m; j++)
        {
            dp[j] = j;
        }

        for (int i = 1; i <= n; i++)
        {
            vector<int> temp(m + 1, 0);
            temp[0] = i;
            for (int j = 1; j <= m; j++)
            {
                if (s[i - 1] == t[j - 1])
                    temp[j] = dp[j - 1];
                else
                {
                    int n1 = dp[j];
                    int n2 = temp[j - 1];
                    int n3 = dp[j - 1];

                    temp[j] = 1 + min(n1, min(n2, n3));
                }
            }
            dp = temp;
        }
        return dp[m];
    }
};