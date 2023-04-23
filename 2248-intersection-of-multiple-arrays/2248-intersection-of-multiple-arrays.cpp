class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>m;
        int l1 = nums.size();
        
        for(auto i:nums){
            for(auto j:i){
                m[j]++;
            }
        }
        
        vector<int>ans;
        for(auto i:m){
            if(i.second == l1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};