class Solution {
public:
    vector<vector<int>> subsets(vector<int>& ns) {
        int n = ns.size();
        int limit = 1<<n;
        vector<vector<int>>ans;
        for(int i=0;i<limit;i++){  
            vector<int>inside;
            for(int j=0; j<n; j++){
                if((1<<j)&i){
                    inside.push_back(ns[j]);
                }
            }
            ans.push_back(inside);
        }
        return ans;
    }
};
