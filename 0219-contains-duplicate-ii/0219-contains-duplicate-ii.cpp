class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int len = nums.size();
        
        for(int i=0; i<len ;i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                if(abs(i - m[nums[i]]) <= k)
                {
                    return true;
                }
            }
            // last item position change
               m[nums[i]] = i;
        }
        return false;
    }
};