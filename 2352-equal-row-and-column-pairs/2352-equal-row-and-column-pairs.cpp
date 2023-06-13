class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        map<vector<int>,int>m;
        int ans = 0;
        for(int i=0;i<g.size();i++){
            m[g[i]]++;
        }
        for(int j=0; j<g[0].size();j++){
            vector<int>v;
            for(int i=0; i<g.size();i++){
                v.push_back(g[i][j]);
            }
            ans = ans + m[v];
        }
        return ans;
    }
};