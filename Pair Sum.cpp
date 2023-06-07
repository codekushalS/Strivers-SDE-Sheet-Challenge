#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fn(vector<int>& arr, int s){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    map<int, int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(mp[s - arr[i]] > 0){
            int f = mp[arr[i]]*mp[s - arr[i]];
            if(2*arr[i] == s) f = (mp[arr[i]]*(mp[arr[i]]-1))/2;
            int x = arr[i], y = s - arr[i];
            if(x > y) swap(x, y);
            mp[arr[i]] = 0;
            mp[s-arr[i]] = 0;
            while(f--) ans.push_back({x, y});
        }
    }
    return ans;
}

int main(){
    int n, s; cin>>n>>s;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<vector<int>> ans = fn(arr, s);
    // sort(ans.begin(), ans.end());

    for(auto x: ans){
        for(auto y: x) cout<<y<<' ';
        cout<<'\n';
    }
}