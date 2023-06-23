#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m) {
    // Write your code here.
    int i = n-1, j = 0;
    while(i >= 0 && j < m && arr1[i] > arr2[j]){
        swap(arr1[i], arr2[j]);
        i--;
        j++;
    }
    sort(arr1.begin(), arr1.begin()+n);
    sort(arr2.begin(), arr2.end());
    for(int i=0;i<m;i++) arr1[n+i] = arr2[i];
    return arr1;
}