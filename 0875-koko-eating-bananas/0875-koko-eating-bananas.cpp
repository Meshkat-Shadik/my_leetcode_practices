class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            long check = canEat(piles,mid,h);
            if(check)
            {
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
    bool canEat(vector<int>& p,int m, int h)
    {
        int len = p.size();
        long sum = 0;
        
        for(int i=0; i<len ; i++)
        {
            int res = p[i]/m;
            sum = sum+res;
            if(p[i]%m != 0)
            {
                sum++;
            }
        }
        return sum<=h;
    }
};