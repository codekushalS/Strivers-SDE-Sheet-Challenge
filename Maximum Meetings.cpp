#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<vector<int>> arr(start.size());
    for(int i=0;i<start.size();i++) arr[i] = {end[i], i+1, start[i]};
    sort(arr.begin(), arr.end());

    vector<int> ans;
    int prev = arr[0][0];
    ans.push_back(arr[0][1]);
    for(int i=1;i<arr.size();i++){
        if(arr[i][2]> prev){
            prev = arr[i][0];
            ans.push_back(arr[i][1]);
        }
    }
    return ans;
}