class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n1, vector<int>& n2) {
        
        vector<vector<int>> ans =  {{},{}};
        unordered_set<int> s1(n1.begin(),n1.end());
        unordered_set<int> s2(n2.begin(),n2.end());
        
        for(auto i:s1){
            if(!s2.count(i)){
                ans[0].push_back(i);
            }
        }
        
        for(auto i:s2){
            if(!s1.count(i)){
                ans[1].push_back(i);
            }
        }
        return ans;
    }
};