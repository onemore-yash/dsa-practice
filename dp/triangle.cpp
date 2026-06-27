// Problem: Triangle
// Pattern: dp+2D
// Link: https://leetcode.com/problems/triangle/description/
// Date Solved: 09-04-2026
// Approach:
// 1)you can make 2D temp array and every time you travel and compute from upper and upper left element  2)you can use bottom up approch in this you make 2D and just every time use min from I and i+1th index and  return at the top 3) in space optimization you can also make linear array prev and you every time make a new curr array from that prev and at the end you can return prev[0](because it is bottom up approch)

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();

        vector<int> prev = triangle[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            vector<int> temp(i + 1);
            for (int j = i; j >= 0; j--)
            {
                int d = prev[j] + triangle[i][j];
                int dg = prev[j + 1] + triangle[i][j];

                temp[j] = min(d, dg);
            }
            prev = temp;
        }
        return prev[0];
    }
};