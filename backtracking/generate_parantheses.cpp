// Problem: generate parantheses
// Pattern: backtracking+need validation(constrain base)(pruning)
// Link: https://leetcode.com/problems/generate-parentheses/description/
// Date Solved: 05-04-2026
// Approach:
// if size of curr ==2n then add and ,  Add '(' if open < n  Add ')' if close < open

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        backtrack(n, ans, "", 0, 0);

        return ans;
    }

    void backtrack(int n, vector<string> &ans, string temp, int o, int c)
    {
        if (temp.length() == 2 * n)
        {
            ans.push_back(temp);
            return;
        }
        if (o < n)
        {
            temp += '(';
            backtrack(n, ans, temp, o + 1, c);
            temp.pop_back();
        }
        if (c < o)
        {
            temp += ')';
            backtrack(n, ans, temp, o, c + 1);
            temp.pop_back();
        }
    }
};