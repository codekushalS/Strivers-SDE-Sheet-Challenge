#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> arr;
  arr.push_back({1});
  for(int i=1;i<n;i++){
    vector<long long int> temp;
    for(int j=0;j<=arr[i-1].size();j++){
      if(j == 0 || j == arr[i-1].size()) temp.push_back(1);
      else temp.push_back(arr[i-1][j] + arr[i-1][j-1]);
    }
    arr.push_back(temp);
  }
  return arr;
}
