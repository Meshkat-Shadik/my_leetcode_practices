class Solution {
public:
    int percentageLetter(string s, char l) {
        int len = s.size();
        int count = 0;
        for(int i=0;i<len;i++)
        {
            if(s[i]==l)
            {
                count++;
            }
        }
        return (count*100)/len;
    }
};