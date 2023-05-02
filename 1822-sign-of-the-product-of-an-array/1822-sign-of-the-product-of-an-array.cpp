class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negC = 0;
        int siz = nums.size();
        for(int i=0; i<siz; i++){
            if(nums[i]==0){
                return 0;
            }
           else if(nums[i]<0){
                negC++;
            }
        }
        if((negC&1)==0){
            return 1;
        }
        return -1;
    }
};