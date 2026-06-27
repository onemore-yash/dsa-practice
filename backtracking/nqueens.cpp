// Problem: N-Queens
// Pattern: backtracking+for-loop+pruning
// Link: https://leetcode.com/problems/n-queens/
// Date Solved: 06-04-2026
// Approach:
// here we travel row by row and in each row we try to put 1 Queen so in each row we check diagonals in only upper part because below is empty and that column at  every position if there is no Queen in these positions then we put Q here and just backtrack for next row when we reach at row==n then we add into ans

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> temp(n, string(n, '.'));
        solve(n, ans, 0, temp);
        return ans;
    }
    void solve(int n, vector<vector<string>> &ans, int row, vector<string> &temp)
    {
        if (row == n)
        {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (safe(row, i, temp, n))
            {
                temp[row][i] = 'Q';
                solve(n, ans, row + 1, temp);
                temp[row][i] = '.';
            }
        }
    }
    bool safe(int row, int col, vector<string> &temp, int n)
    {
        for (int i = 0; i < row; i++)
            if (temp[i][col] == 'Q')
                return false;
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
            if (temp[i][j] == 'Q')
                return false;

        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
            if (temp[i][j] == 'Q')
                return false;

        return true;
    }
};