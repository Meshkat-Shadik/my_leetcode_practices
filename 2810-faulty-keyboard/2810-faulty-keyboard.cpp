class Solution {
public:
    string finalString(string s) {
        string ans;
        for(int i=0; i<s.size();i++){
            if(s[i]=='i'){
                reverse(begin(ans), end(ans));
            }
            else{
                 ans = ans + s[i];
            }
        }
        return ans;
    }
};