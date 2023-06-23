int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here
    sort(at, at+n);
    sort(dt, dt+n);
    int ans = 1, plt = 1;
    int i = 1, j = 0;
    while(i < n && j < n){
        if(at[i] <= dt[j]){
            i++;
            plt++;
        }
        else{
            j++;
            plt--;
        }
        ans = max(ans, plt);
    }
    return ans;
}