class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = "";
        int len = s.size();
        sort(begin(s),end(s));
        
        string s1 = s[0];
        string s2 = s[len-1];
        int siz = s1.size();
        
        for(int i=0;i<siz;i++)
        {
            if(s1[i]==s2[i])
            {
                ans = ans + s1[i];
            }
            else
            {
                break;
            }
        }
        
        return ans;
    }
};