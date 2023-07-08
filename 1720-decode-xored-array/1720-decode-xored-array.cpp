class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int len = encoded.size();
        vector<int>ans;
        ans.push_back(first);
        for(int i=0; i<len;i++){
            ans.push_back(encoded[i]^ans[i]);
        }
        return ans;
    }
};