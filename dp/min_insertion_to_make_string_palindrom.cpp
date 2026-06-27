// Problem: min insertion to make string palindrom
// Pattern: dp on string(lcs type)
// Link: https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/
// Date Solved: 01-06-2026
// Approach:
// use 87 to solve

#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int lcs(string str1, string str2)
    {
        int m = str1.length();
        int n = str2.length();

        vector<int> prev(n + 1, 0);

        for (int i = 1; i <= m; i++)
        {
            vector<int> curr(n + 1, 0);
            for (int j = 1; j <= n; j++)
            {
                if (str1[i - 1] == str2[j - 1])
                {
                    curr[j] = 1 + prev[j - 1];
                }
                else
                {
                    curr[j] = max(prev[j], curr[j - 1]);
                }
            }
            prev = curr;
        }
        return prev[n];
    }
    int longestPalindromeSubseq(string s)
    {
        string t = s;
        reverse(s.begin(), s.end());

        return lcs(s, t);
    }

public:
    int minInsertions(string s)
    {
        int n = s.length();
        int t = longestPalindromeSubseq(s);
        return n - t;
    }
};