class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,len = s.size(), ans = INT_MIN;
        if(len == 0) return 0;
        unordered_map<char,int>m;
        while(j<len)
        {
            //normal calc
            m[s[j]]++;
            if(m.size() == j-i+1)
            {
                //calc of ans
                ans = max(ans,j-i+1);
            }
            else if(m.size()<j-i+1)
            {
                while(m.size()<j-i+1)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    {
                        m.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
    }
};