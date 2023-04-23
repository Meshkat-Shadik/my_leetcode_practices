class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int len = mat.size();
        int l1 = mat[0].size();
        vector<int>ans(k);
        for(int i=0; i<len; i++){
            mat[i].push_back(i);
        }
        sort(mat.begin(),mat.end());
        for(int i=0; i<k;i++){
            ans[i]=mat[i][l1];
        }
        return ans;
    }
};