class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int s = 0;
        int e = a.size();
        
        while(s<e)
        {
            int m = s + ((e - s) / 2);

            if((a[m]-m-1) >= k)
            {
                e = m;                
            }
            else
            {
                s = m+1;
            }
        }
        return s+k;
    }
};