// Problem: palindrome partationing
// Pattern: backtracking+partation
// Link: https://leetcode.com/problems/palindrome-partitioning/description/
// Date Solved: 05-04-2026
// Approach:
// At each index i, try all substrings s[i…j]; if the substring is a palindrome, include it in the current partition.Then recursively solve for the remaining string starting from j + 1, and backtrack to explore other cuts.and when i==size then simply add no need to check palindrome because we already took palidrome elements in subset

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> res;
        vector<string> subset;
        backtrack(s, res, subset, 0);

        return res;
    }
    bool checkPalindrome(string &s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    void backtrack(string &s, vector<vector<string>> &res, vector<string> &subset, int i)
    {
        if (i == s.length())
        {
            res.push_back(subset);
            return;
        }
        for (int j = i; j < s.length(); j++)
        {
            if (checkPalindrome(s, i, j))
            {
                subset.push_back(s.substr(i, j - i + 1));
                backtrack(s, res, subset, j + 1);
                subset.pop_back();
            }
        }
    }
};