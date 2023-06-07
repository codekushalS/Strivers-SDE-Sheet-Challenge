#include <bits/stdc++.h>
using namespace std;

void fn(vector<vector<int>>& arr, int n, int m){
	int r = 0, c = 0, rf = n-1, cf = m-1, prev;
	while(r < rf && c < cf){
		prev = arr[r][c];
		for(int i=c+1;i<=cf;i++){
			int temp = arr[r][i];
			arr[r][i] = prev;
			prev = temp;
		}
		for(int i=r+1;i<=rf;i++){
			int temp = arr[i][cf];
			arr[i][cf] = prev;
			prev = temp;
		}
		for(int i=cf-1;i>=c;i--){
			int temp = arr[rf][i];
			arr[rf][i] = prev;
			prev = temp;
		}
		for(int i=rf-1;i>=r;i--){
			int temp = arr[i][c];
			arr[i][c] = prev;
			prev = temp;
		}
		r++, rf--, c++, cf--;
	}
}

int main(){
	int n, m; cin>>n>>m;
	vector<vector<int>> arr(n, vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>arr[i][j];
	}
	fn(arr, n, m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cout<<arr[i][j]<<' ';
		cout<<'\n';
	}
}