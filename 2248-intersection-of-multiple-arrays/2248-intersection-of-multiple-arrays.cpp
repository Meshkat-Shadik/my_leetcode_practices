class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int arr[1001] = {0};
        int n = nums.size();
        vector<int> ans;

        for(auto &i : nums) {
            for(auto &j : i) {
                arr[j]++;
            }
        }

        for(int i = 0; i < 1001; i++) {
            if(arr[i] == n)
                ans.emplace_back(i);
        }
        return ans;
    }
};