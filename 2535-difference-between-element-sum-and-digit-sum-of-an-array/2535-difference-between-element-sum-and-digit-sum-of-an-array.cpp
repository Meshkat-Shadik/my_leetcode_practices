class Solution {
public:
    
    int digitSum(int dig)
    {
        int total = 0;
        while(dig>0)
        {
            total = total + (dig%10);
            dig = dig/10;
        }
        return total;
    }
    
    
    int differenceOfSum(vector<int>& nums) {
        int len = nums.size();
        int digSum = 0, numSum = 0;
        for(int i=0; i<len; i++)
        {
            numSum = numSum + nums[i];
            digSum = digSum + digitSum(nums[i]);
        }
        return abs(numSum-digSum);
    }
};