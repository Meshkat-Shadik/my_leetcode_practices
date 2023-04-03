class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = nums.size();
        int maxx = 0;
        int count = 0;
        for(int i=0; i<len ;i++)
        {
            if(nums[i]==1){
                count++;
                maxx = max(count,maxx);
            }
            else{
                count = 0;
            }
        }
        return maxx;
    }
};