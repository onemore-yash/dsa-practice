// Problem: number of LIS
// Pattern: dp on LIS
// Link: https://leetcode.com/problems/number-of-longest-increasing-subsequence/description/
// Date Solved: 06-06-2026
// Approach:
// make a count array and every time if curr element is less than 1+prev then simply inherete and if curr==prev+1 then do cnt[i]+=cnt[j] and at the end sum all whose length is equal to maxi

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution {
public:

};
