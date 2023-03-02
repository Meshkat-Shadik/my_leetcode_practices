class Solution {
public:
    string truncateSentence(string s, int k) {
        int len = s.size();
        int count = 0;
        for(int i=0;i<len;i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
            if(count==k)
            {
                s.erase(s.begin()+i,s.end());
                break;
            }
        }
        return s;
    }
};