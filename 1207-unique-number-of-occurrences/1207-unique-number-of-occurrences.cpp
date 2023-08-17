class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int>m;
        for(int i=0; i<arr.size();i++){
            m[arr[i]]++;
        }
    unordered_set<int>s;
        for(auto &i : m){
            if(!s.insert(i.second).second) return false;
        }
        return true;
    }
};