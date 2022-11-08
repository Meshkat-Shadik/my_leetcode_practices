class Solution {
public:
    string makeGood(string s) {
        int len = s.size();
        for(int i=0; i<len-1;i++)
        {
            if(abs(s[i+1]-s[i])==32)
            {
                return makeGood(s.substr(0,i)+s.substr(i+2));
            }
        }
        return s;
    }
};