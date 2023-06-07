#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int k = arr.size()/3;
    map<int, int> mp;
    vector<int> ans;

    for(int i=0;i<arr.size();i++) mp[arr[i]]++;
    for(auto x: mp){
        if(x.second > k) ans.push_back(x.first);
    }
    return ans;
}