class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1 = s.size(), l2 = t.size();
        int j = 0;
        for(int i=0; i<l2 && j<l1 ; i++){
            if(s[j] == t[i]){
              j++;
            }
        }
        return j==l1;
    }
};