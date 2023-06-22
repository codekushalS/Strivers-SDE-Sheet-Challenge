#include <bits/stdc++.h>
using namespace std;

bool bs(vector<vector<int>>& arr, int x){
	int n = arr.size(), m = arr[0].size();
	if(arr[0][0] > x || arr[n-1][m-1] < x) return 0;

	int s = 0, e = n-1, ch = -1;
	while(s <= e){
		int mid = (s+e)/2;
		if(arr[mid][0] <= x){
			ch = mid;
			s = mid+1;
		}
		else e = mid-1;
	}
	if(ch == -1) return 0;
	if(ch != -1){
		// int ans = -1;
		s = 0, e = m-1;
		while(s <= e){
			int mid = (s+e)/2;
			if(arr[ch][mid] == x) return 1;
			else if(arr[ch][mid] < x) s = mid + 1;
			else e = mid - 1;
		}
	}
	return 0;
}

int main(){
	int n, m, x; cin>>n>>m>>x;
	vector<vector<int>> arr(n, vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>arr[i][j];
	}
	cout<<bs(arr, x);
}