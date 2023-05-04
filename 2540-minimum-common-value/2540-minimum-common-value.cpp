class Solution {
public:
    int getCommon(vector<int>& n1, vector<int>& n2) {
        unordered_set<int>s{n1.cbegin(),n1.cend()};
        int res = -1;
        for(auto i:n2){
            if(s.erase(i)>0){
                res = i;
                break;
            }
        }
        return res;
    }
};