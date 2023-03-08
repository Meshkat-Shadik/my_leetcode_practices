class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            //cout<<"Mid = "<<mid<<endl;
            long time = work(piles,mid);
           // cout<<time<<endl;
            if(time <= h)
            {
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    long work(vector<int>& v, int div){
        long sum = 0;
        for(int i=0;i<v.size(); i++)
        {
            sum+=(v[i]/div)+((v[i]%div)!=0);
        }
        return sum;
    }
};