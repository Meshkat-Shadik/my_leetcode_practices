class Solution {
public:
    
    int differenceOfSum(vector<int>& n) {
        int len = n.size();
        int ans = 0;
        for(int i=0; i<len; i++)
        {
            int val = n[i];
            ans = ans + val;
            
            while(val)
            {
                ans = ans - (val%10);
                val = val/10;
            }
        }
        return ans;
    }
};