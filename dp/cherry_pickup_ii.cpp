// Problem: Cherry pickup II
// Pattern: dp+3D
// Link: https://leetcode.com/problems/cherry-pickup-ii/description/
// Date Solved: 09-04-2026
// Approach:
// you can Cache result of state (i, j1, j2) to avoid recomputation If already computed → return stored value, else compute using 9 moves(in recursion Try all 9 combinations (dj1, dj2) at every row for both robots Return max cherries collected, handle overlap (same cell))Build DP from last row → first row using all (j1, j2) states For each state, take max over next row’s 9 transitionsOnly keep current row & next row DP (2D arrays)Replace 3D DP by rolling arrays since only i+1 is needed

#include <bits/stdc++.h>
using namespace std;

// TODO: Paste your solution code here (from LeetCode/GFG submission history)

class Solution {
public:

};
