#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int x = arr[0][0], y = arr[0][1];
    for(int i=1;i<arr.size();i++){
        int a = arr[i][0], b = arr[i][1];
        if(a <= y){
            x = min(x, a);
            y = max(y, b);
        }
        else{
            ans.push_back({x, y});
            x = a, y = b;
        }
    }
    if(ans.empty() || ans.back()[0] != x && ans.back()[1] != y) ans.push_back({x, y});
    return ans;
}
