class Solution {
public:
    int maxProfit(vector<int>& ps) {
        int minn = INT_MAX;
        int maxx = INT_MIN;
        
        for(int i=0; i<ps.size(); i++){
            //we get min so far
            minn = min(minn,ps[i]);
            //we need to subtract current element 
            int temp = ps[i]-minn;
            maxx = max(maxx,temp);
        }
        return maxx;
    }
};