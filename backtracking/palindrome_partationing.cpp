// Problem: palindrome partationing
// Pattern: backtracking+partation
// Link: https://leetcode.com/problems/palindrome-partitioning/description/
// Date Solved: 05-04-2026
// Approach:
// At each index i, try all substrings s[i…j]; if the substring is a palindrome, include it in the current partition.Then recursively solve for the remaining string starting from j + 1, and backtrack to explore other cuts.and when i==size then simply add no need to check palindrome because we already took palidrome elements in subset

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution {
public:

};
