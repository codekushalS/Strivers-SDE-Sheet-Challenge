#include <bits/stdc++.h> 

// int help(int i, int j, vector<vector<int>>& dp){
    
//  int n = dp.size(), m = dp[0].size();
//  if(i == n-1 && j == m-1) return 1;
//  if(dp[i][j] != -1) return dp[i][j];

//  int ans = 0;
//  if(i + 1 < n) ans += help(i+1, j, dp);
//  if(j + 1 < m) ans += help(i, j+1, dp);
//  return dp[i][j] = ans;
// }

int uniquePaths(int m, int n) {
    // Write your code here.
    int path = 1;
    for (int i = n; i < (m + n - 1); i++) {
        path *= i;
        path /= (i - n + 1);
    }
    return path;
}