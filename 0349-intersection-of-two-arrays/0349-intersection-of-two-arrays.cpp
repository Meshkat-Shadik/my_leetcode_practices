class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        if(n1.empty() || n2.empty()) {
            return {};
        }
        unordered_set<int>s{n1.cbegin(),n1.cend()};
        vector<int>ans;
        for(auto i:n2){
            if(s.erase(i)>0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};