

class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int s = 0, cz = 0, ans = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0) cz++;
            if(cz > k){
                while(arr[s] != 0) s++;
                s++;
                cz--;
            }
            ans = max(ans, i - s + 1);
        }
        return ans;
    }
};