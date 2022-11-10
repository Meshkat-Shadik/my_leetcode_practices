class Solution {
public:
    string removeDuplicates(string s) {
        int j=0;
        for(int i=1; i<s.size();i++)
        {
            if(j<0 || s[j] != s[i])
            {
                s[++j]=s[i];
            }
            else
            {
                --j;
            }
        }
        return s.substr(0,j+1);
    }
};