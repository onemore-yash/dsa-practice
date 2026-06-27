// Problem: Restore IP address
// Pattern: backtracking+partation
// Link: https://leetcode.com/problems/restore-ip-addresses/description/
// Date Solved: 05-04-2026
// Approach:
// Try all possible substrings of length 1–3 and check if each is a valid IP segment. If valid, recursively build the next part; after placing 3 dots, validate and add the final segment.

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
    bool valid(string temp)
    {
        if (temp.size() > 3 || temp.size() == 0)
            return false;
        if (temp.size() > 1 && temp[0] == '0')
            return false;
        if (temp.size() && stoi(temp) > 255)
            return false;
        return true;
    }

public:
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> ans;
        backtrack(s, 0, 0, "", ans);

        return ans;
    }

    void backtrack(string s, int i, int dots, string temp, vector<string> &ans)
    {
        if (dots == 3)
        {
            string last = s.substr(i);
            if (valid(last))
            {
                ans.push_back(temp + last);
            }
            return;
        }

        for (int j = i; j < i + 3 && j < s.size(); j++)
        {
            string part = s.substr(i, j - i + 1);

            if (valid(part))
            {
                backtrack(s, j + 1, dots + 1, temp + part + ".", ans);
            }
        }
    }
};
