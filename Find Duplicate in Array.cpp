#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
   // Write your code here.
   vector<int> f(n, 0);
   for(int i=0;i<n;i++){
      f[arr[i]]++;
      if(f[arr[i]] > 1) return arr[i];
   }
}
