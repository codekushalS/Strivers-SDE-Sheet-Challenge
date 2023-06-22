#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
	// for(int x: arr) cout<<x<<' ';
	// 	cout<<'\n';

	int cnt = 1, ans = 1;
	for(int i=0;i<n-1;i++){
		if(arr[i] == arr[i+1]) continue;
		else if(arr[i+1] == arr[i] + 1) cnt++;
		else{
			ans = max(ans, cnt);
			cnt = 1;
		}
	}
	ans = max(ans, cnt);
    return ans;
}