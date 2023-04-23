class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>m;
        int l1 = nums.size();
        
        for(int i=0; i<l1; i++){
            for(int j=0; j<nums[i].size(); j++){
                m[nums[i][j]]++;
            }
        }
        
        vector<int>ans;
        for(auto i:m){
            if(i.second == l1){
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};