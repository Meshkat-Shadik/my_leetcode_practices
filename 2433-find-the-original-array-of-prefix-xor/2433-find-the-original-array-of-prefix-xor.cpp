class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int xorV = pref[0];
        for(int i=1;i<pref.size();i++){
            int tmp = xorV ^ pref[i];
            pref[i] = tmp;
            xorV = xorV ^ pref[i];
        }
        return pref;
    }
};