class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        int prefix[len];
        prefix[0]=nums[0];
        for(int i=1;i<len;i++)
        {
            prefix[i] = nums[i]+prefix[i-1];
        }
        unordered_map<int,int>m;
        int count = 0;
        for(int i=0;i<len;i++)
        {   
            if(prefix[i]==k)
            {
                count++;
            }
            if(m.find(prefix[i]-k) != m.end())
            {
                count = count + m[prefix[i]-k];
            }
             m[prefix[i]]++;
        }
        
        return count;   
    }
};