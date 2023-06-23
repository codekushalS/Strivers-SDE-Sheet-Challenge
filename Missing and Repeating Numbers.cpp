#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here
    pair<int, int> ans;
    vector<int> f(n+1, 0);
    for(int i=0;i<n;i++)f[arr[i]]++;
    for(int i=1;i<=n;i++){
        if(f[i] == 0) ans.first = i;
        if(f[i] == 2) ans.second = i;
    }
    return ans;
}
