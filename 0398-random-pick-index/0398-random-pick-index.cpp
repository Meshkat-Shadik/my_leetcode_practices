class Solution {
public:
    vector<int>n;
    Solution(vector<int>& nums) {
        n = nums;
    }
    
    int pick(int target) {
        int len = n.size();
        
        int random =  rand()%len;
        
        while(n[random]!=target)
        {
            random = rand()%len;
        }
        return random;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */