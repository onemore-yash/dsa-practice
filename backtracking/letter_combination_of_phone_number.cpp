// Problem: letter combination of phone number
// Pattern: backtracking+for-loop
// Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// Date Solved: 05-04-2026
// Approach:
// first make a map which store char corresponding to each number then just every time append each element for each element take all possibilites by for loop

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.empty())
            return ans;
        unordered_map<char, string> dToc = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}};
        backtrack(digits, 0, "", ans, dToc);

        return ans;
    }

    void backtrack(string &digits, int i, string temp, vector<string> &ans, unordered_map<char, string> &dToc)
    {
        if (i == digits.length())
        {
            ans.push_back(temp);
            return;
        }
        string letters = dToc.at(digits[i]);
        for (char letter : letters)
        {
            backtrack(digits, i + 1, temp + letter, ans, dToc);
        }
    }
};