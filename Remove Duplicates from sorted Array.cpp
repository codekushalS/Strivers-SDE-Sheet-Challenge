int removeDuplicates(vector<int> &arr, int n) {
   // Write your code here.
   int ans = n;
   for(int i=0;i<n;i++){
      int x = arr[i], cnt = 0;
      while(arr[i] == x){
         cnt++;
         i++;
      }
      i--;
      ans -= (cnt-1);
   }
   return ans;
}