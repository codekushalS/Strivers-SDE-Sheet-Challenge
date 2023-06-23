#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int x) {
    // Write your code here.
    map<vector<int>, int> mp;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    // for(int j: arr) cout<<j<<' ';
    //  cout<<"\n\n";
    for(int i=0;i<n-2;i++){
        // if(i > 0 && arr[i] == arr[i+1]) continue;
        int l = i+1, r = n-1;
        while(l < r){
            if(arr[i] + arr[l] + arr[r] == x){
                // cout<<i<<' '<<l<<' '<<r<<"\n\n";
                if(mp[{arr[i], arr[l], arr[r]}] == 0){
                    ans.push_back({arr[i], arr[l], arr[r]});
                    mp[{arr[i], arr[l], arr[r]}] = 1;
                }

                while(l < r && arr[l] == arr[l+1]) l++;
                l++;
            }
            else if(arr[i] + arr[l] + arr[r] > x) r--;
            else l++;
        }
    }
    return ans;
}