// Problem: Assign Cookies
// Pattern: greedy
// Link: https://leetcode.com/problems/assign-cookies/description/
// Date Solved: 11-04-2026
// Approach:
// just take 2 pointer apporch

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int l = 0, r = 0;
        while (l < g.size() && r < s.size())
        {
            if (g[l] <= s[r])
                l++;
            r++;
        }
        return l;
    }
};
