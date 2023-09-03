class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int res = nums[0];
        int siz = nums.size();
        for(int i=1;i<siz;i++){
            res = res ^ nums[i];
        }
      long long int mask = res & (-res);
        vector<int>ans = {0,0};
        for(int i=0;i<siz;i++){
            if(nums[i]&mask){
                ans[0] = ans[0] ^ nums[i];
            }
            else{
                ans[1] = ans[1] ^ nums[i];
            }
        }
        return ans;
    }
};