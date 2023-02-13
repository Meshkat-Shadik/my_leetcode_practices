class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int s=0, e=0;
        deque<int>q;
        vector<int>res;
        int len = nums.size();
        while(e<len){
            //calculation
            //clearing all smaller
            while(!q.empty() && nums[e]>q.back()) {
                q.pop_back();
            }
            q.push_back(nums[e]);
            
             if(e-s+1<k)
            {
                e++;
            }
        else if(e-s+1 == k)
            {
                //answer calculation
                res.push_back(q.front());
            
                if(q.front()==nums[s]) q.pop_front();
            
                //slide
                s++;
                e++;
            }
        }
        return res;
    }
};