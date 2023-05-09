class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int x = m[0].size(), y = m.size();
        int l=0, r=x-1, t=0, b=y-1;
        vector<int>res;
        while(res.size()<x*y){
            for(int j=l; j<=r && res.size()<x*y;j++){
                res.push_back(m[t][j]);
            }
            for(int i=t+1; i<=b-1 && res.size()<x*y;i++){
                res.push_back(m[i][r]);
            } 
            for(int j=r; j>=l && res.size()<x*y;j--){
                res.push_back(m[b][j]);
            }
            for(int i=b-1; i>=t+1 && res.size()<x*y;i--){
                res.push_back(m[i][l]);
            }
            l++;
            r--;
            t++;
            b--;
        }
        return res;
    }
};