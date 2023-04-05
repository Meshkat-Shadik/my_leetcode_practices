class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxx = *max_element(nums.begin(), nums.end());
        int minn =  *min_element(nums.begin(), nums.end());
        int temp;
        
        while(minn){
            temp = maxx % minn;
            maxx = minn;
            minn = temp;
        }
        return maxx;
    }
};