#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &arr)
{
	// Write your code here.
	int n = arr.size(), m = arr[0].size();
	vector<int> rows, cols;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j] == 0){
				rows.push_back(i);
				cols.push_back(j);
			}
		}
	}
	for(int i=0;i<rows.size();i++){
		for(int j=0;j<m;j++) arr[rows[i]][j] = 0;
	}
	for(int j=0;j<cols.size();j++){
		for(int i=0;i<n;i++) arr[i][cols[j]] = 0;
	}
}