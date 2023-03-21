class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int len = nums.size();
        long long ans = 0, count = 0;
        
        for(int i=0; i<len; i++)
        {
            if(nums[i]==0)
            {
                count++;
                ans = ans+count;
            }
            else{
                count = 0;
            }
        }
        return ans;
    }
};