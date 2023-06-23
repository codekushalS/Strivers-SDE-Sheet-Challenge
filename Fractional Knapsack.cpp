#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    vector<pair<double, int>> arr(n);
    for(int i=0;i<n;i++){
        arr[i].first = (items[i].second*1.0)/items[i].first;
        arr[i].second = items[i].first;
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    double ans = 0;
    int i = 0;
    while(w > 0){
        ans += arr[i].first*min(w, arr[i].second);
        w -= min(arr[i].second, w);
        i++;
    }
    ans = round(ans*100)/100;
    return ans;
}