// Problem: unique paths
// Pattern: dp+2D
// Link: https://leetcode.com/problems/unique-paths/description/
// Date Solved: 09-04-2026
// Approach:
// in 2D matrix put 1 in 0th row and column and then at every cell sum both previous diagonal elements or in space optimization just make 0th row's size vector of all 1's and every time just add previous element  for every row

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{

public:
    int uniquePaths(int m, int n)
    {
        vector<int> temp(n, 1);
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                temp[j] += temp[j - 1];
            }
        }
        return temp[n - 1];
    }
};
