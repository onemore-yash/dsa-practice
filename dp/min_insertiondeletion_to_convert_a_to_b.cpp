// Problem: min insertion/deletion to convert A to B
// Pattern: dp on string(lcs type)
// Link: https://leetcode.com/problems/delete-operation-for-two-strings/description/
// Date Solved: 01-06-2026
// Approach:
// use 85 and one formula

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

public:
    int minDistance(string s, string t)
    {
        int m = lcs(s, t);
        int n1 = s.size();
        int n2 = t.size();

        return n1 + n2 - 2 * m;
    }
};