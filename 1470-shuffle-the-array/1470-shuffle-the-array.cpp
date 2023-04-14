class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       
        for(int i=0;i<n;i++){
            nums[i] = nums[i] + nums[n+i] * 10000;
        }
        
        for(int i = n-1; i>=0 ; i--){
            //cout<<2*i+1<<" , "<<2*i<<endl; 
            nums[2*i+1] = nums[i]/10000;
            nums[2*i] = nums[i]%10000;
        }
        
        return nums;
    }
};