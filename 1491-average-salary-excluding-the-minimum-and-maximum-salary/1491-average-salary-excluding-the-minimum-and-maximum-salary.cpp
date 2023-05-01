class Solution {
public:
    double average(vector<int>& s) {
        int mx = INT_MIN, mn = INT_MAX;
        double sum = 0;
        int len = s.size();
        for(int i=0; i<len; i++){
            mx = max(s[i],mx);
            mn = min(s[i],mn);
            sum = sum + s[i];
        }
        sum = sum - (mx+mn);
        sum = sum/(len-2);
        return sum;
    }
};