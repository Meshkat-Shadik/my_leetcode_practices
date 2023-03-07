class Solution {
public:
    long long minimumTime(vector<int>& time, int tt) {
         long long left=0,right=tt*(long long)time[0],ans=right;
        while(left<right){
            long long mid=(left+right)/2;
            long long count=0;
            int len = time.size();
            for(int i=0;i<len;i++){
                count = count + (mid/time[i]);
            } 
            if(count>=tt){
                ans=min(ans,mid);
                right=mid;
            }else{
                left=mid+1;
            }
            
        }
        return ans;
    }
};