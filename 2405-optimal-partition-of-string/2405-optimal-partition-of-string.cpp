class Solution {
public:
    int partitionString(string s) {
        int charList[26] = {};
        int count = 0;
        int pos = 0;
        
        for(int i=0;i<s.size();i++)
        {
            if(charList[s[i]-'a'] >= pos)
            {
                count++;
                pos = i+1;
            }
            charList[s[i]-'a'] = i+1;
        }
        return count;
    }
};