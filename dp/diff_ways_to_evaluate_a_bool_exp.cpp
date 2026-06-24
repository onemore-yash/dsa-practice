// Problem: diff ways to evaluate a bool exp
// Pattern: MCM dp
// Link: https://www.geeksforgeeks.org/problems/boolean-parenthesization5610/1
// Date Solved: 07-06-2026
// Approach:
// dp[i][j][isTrue] stores the number of ways to parenthesize the substring exp[i...j] so that it evaluates to True/False.
// For every operator between i and j, split into left and right parts, get (lT, lF, rT, rF), and combine them according to the operator's truth table (&, |, ^).
// Fill DP for increasing substring lengths (or use i from n-1 → 0 and j from i → n-1) so that smaller subproblems are already computed before larger ones.

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution {
public:

};
