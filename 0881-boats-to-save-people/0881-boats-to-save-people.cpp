class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        int s = 0, e = p.size()-1;
        int count = 0;
        sort(p.begin(),p.end());
        while(s<=e){
            if(p[s]+p[e]<=l){
                s++;
                e--;
                count++;
            }
            else{
                e--;
                count++;
            }
        }
        return count;
    }
};