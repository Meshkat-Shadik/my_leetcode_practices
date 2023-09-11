class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        unordered_map<int,vector<int>>m;
        vector<vector<int>> ans;
        
        for(int i=0; i<g.size(); i++){
            //pushing each item
            m[g[i]].push_back(i);
            
            //check if size is equaled
            if(m[g[i]].size() == g[i]){
                //we need to push that to answer
                ans.push_back(m[g[i]]);
                //clear for next 
                m[g[i]].clear();
            }
        }
        return ans;
    }
};