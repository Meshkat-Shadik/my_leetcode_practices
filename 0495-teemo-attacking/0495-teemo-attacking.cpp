class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int d) {
        int len = ts.size();
        int res = 0;
        for(int i=0; i<len-1; i++)
        {
            int diff = ts[i+1]-ts[i];
            if(diff<d){
                res = res + diff;
            }
            else{
                res = res + d;
            }
        }
        return res+d;
    }
};