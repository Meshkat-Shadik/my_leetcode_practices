class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n, 0));
        int l=0, r=n-1,t=0, d=n-1;
        int count = 1;        
        while(count<=n*n){
            for(int i=l;i<=r && count<=n*n;i++){
                ans[t][i]=count++;
            }
             for(int i=t+1;i<=d-1 && count<=n*n;i++){
                ans[i][r]=count++;
            }
             for(int i=r;i>=l && count<=n*n;i--){
                ans[d][i]=count++;
            }
             for(int i=d-1;i>=t+1 && count<=n*n;i--){
                ans[i][l]=count++;
            }
            l++;
            r--;
            t++;
            d--;
        }
        return ans;
    }
};