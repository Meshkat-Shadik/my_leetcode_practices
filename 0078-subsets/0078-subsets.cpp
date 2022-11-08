class Solution {
public:
    //[1,2,3] => 3 bit representation
    //000 => []
    //001 => [3]
    //010 => [2]
    //011 => [2,3]
    //100 => [1]
    //101 => [1,3]
    //110 => [1,2]
    //111 => [1,2,3]

    vector<vector<int>> subsets(vector<int>& nums) {
       int n = nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<(1<<n);i++) //traverse till 2^n; 1<<n = power(2,n)
        {   
            //let i = 5 = 101
            vector<int>v;           
            for(int j=0;j<n;j++)
            {   // j = 0 
                //      i = 101
                //      j = 000
                //      false
                // j = 1
                //      i = 101
                //      j = 010
                //      false
                // j = 2
                //      i = 101
                //      j = 100
                //      true
                if((1<<j)&i)
                {
                    //push the set bit positioned value to v
                    v.push_back(nums[j]); 
                }    
            }
            ans.push_back(v);
        }
        return ans;
    }
};