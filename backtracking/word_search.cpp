// Problem: word search
// Pattern: backtracking+dfs+pruning
// Link: https://leetcode.com/problems/word-search/description/
// Date Solved: 06-04-2026
// Approach:
// we have to use dfs function at every node se iterate through all elements and check dfs function in dfs function we check all 4 direction and we put # symbol as visited when backtrack then instead # put that back which we can store in some temp and also put all boundry conditions with element check and when we get word size then return true

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    bool exist(vector<vector<char>> &board, string word)
    {
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>> &board, string &word, int i, int j, int k)
    {
        if (k == word.size())
            return true;

        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[k])
            return false;

        char temp = board[i][j];
        board[i][j] = '*';
        bool found = dfs(board, word, i - 1, j, k + 1) || dfs(board, word, i, j - 1, k + 1) || dfs(board, word, i + 1, j, k + 1) || dfs(board, word, i, j + 1, k + 1);

        board[i][j] = temp;

        return found;
    }
};