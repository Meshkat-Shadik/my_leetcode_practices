class Solution {
public:
    bool checkAlmostEquivalent(string w1, string w2) {
        unordered_map<char,int>m;
        unordered_map<char,int> :: iterator it;
        int len1 = w1.size();
        int len2 = w2.size();
       
        for(int i=0;i<len1;i++)
        {
            m[w1[i]]++;
            m[w2[i]]--;
        }
        
    for(it=m.begin();it !=m.end();++it)
      {
        if(abs(it->second)>3)
        {
            return false;
        }
      }
        return true;
    }
};