// Problem: Longest increasing subsequence
// Pattern: dp on LIS
// Link: https://leetcode.com/problems/longest-increasing-subsequence/description/
// Date Solved: 06-06-2026
// Approach:
// use temp array and just add and replace and at the end return size of temp

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution
{
public:
    int lengthOfLIS(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> temp;
        temp.push_back(arr[0]);

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > temp.back())
                temp.push_back(arr[i]);
            else
            {
                int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
                temp[ind] = arr[i];
            }
        }
        return temp.size();
    }
};
