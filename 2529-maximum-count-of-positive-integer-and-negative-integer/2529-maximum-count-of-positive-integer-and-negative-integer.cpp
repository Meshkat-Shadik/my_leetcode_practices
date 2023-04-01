class Solution {
public:
    int maximumCount(vector<int>& n) {
       int len = n.size();
       int pos = lower_bound(n.begin(),n.end(),1) - n.begin();
       int zero = lower_bound(n.begin(),n.end(),0) - n.begin();
       
       return max(zero,len-pos);
    }
};