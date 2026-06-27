// Problem: Longest common subsequence
// Pattern: dp on string(lcs type)
// Link: https://www.naukri.com/code360/problems/longest-common-subsequence_624879?leftPanelTabValue=PROBLEM
// Date Solved: 31-05-2026
// Approach:
// here you have to give index I to 1st and j to 2nd string and then write base case and comparision

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

#include <string>

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
