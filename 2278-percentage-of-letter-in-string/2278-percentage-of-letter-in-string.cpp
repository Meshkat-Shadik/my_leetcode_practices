class Solution {
public:
    int percentageLetter(string s, char l) {
        unordered_map<char,int>m;
        int len = s.size();
        for(int i=0;i<len;i++)
        {
            m[s[i]]++;
        }
        //cout<<m[l]<<" - "<<(m[l]*100)/len<<endl;
        return (m[l]*100)/len;
    }
};