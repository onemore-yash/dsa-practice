// Problem: Longest common substring
// Pattern: dp on string(lcs type)
// Link: https://www.naukri.com/code360/problems/longest-common-substring_1235207?leftPanelTabValue=PROBLEM
// Date Solved: 01-06-2026
// Approach:
// remove that 2 condition from subsequence and add one more variable maxi

#include <bits/stdc++.h>
using namespace std;

int lcs(string &str1, string &str2)
{
    int n = str1.size();
    int m = str2.size();
    vector<int> prev(m + 1, 0);
    vector<int> curr(m + 1, 0);

    int ans = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                curr[j] = 1 + prev[j - 1];
                ans = max(ans, curr[j]);
            }
            else
            {
                curr[j] = 0;
            }
        }
        prev = curr;
    }
    return ans;
}
