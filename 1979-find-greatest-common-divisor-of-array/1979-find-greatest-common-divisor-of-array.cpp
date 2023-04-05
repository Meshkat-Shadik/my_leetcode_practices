class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxx = INT_MIN, minn = INT_MAX;
        int temp;
        
        
        for(int i=0; i<nums.size();i++)
        {
            maxx = max(maxx,nums[i]);
            minn = min(minn,nums[i]);
        }
        
        while(minn){
            temp = maxx % minn;
            maxx = minn;
            minn = temp;
        }
        return maxx;
    }
};