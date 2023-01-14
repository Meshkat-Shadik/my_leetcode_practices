class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int initial = 0,i;
        int size = nums.size();
        for(i=0;i<size;i++){
            if(nums[i]!=val)
            {
                nums[initial] = nums[i];
                initial++;
            }
        }
        return initial;
    }
};