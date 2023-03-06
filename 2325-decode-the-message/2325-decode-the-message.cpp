class Solution {
public:
    string decodeMessage(string k, string me) {
        vector<int>v(26,-1);
        int len1 = k.size();
        int len2 = me.size();
      int temp = 0;  
      for(int i=0; i<len1; i++)
      {
          if(k[i] != ' ' && v[k[i]-'a']==-1)
          {
              v[k[i]-'a'] = temp;
              temp++;
          }
      }
        
        for(int i=0;i<len2; i++)
        {
            if(me[i]!=' ')
            {
                me[i]=v[me[i]-'a']+'a';
            }
        }
        return me;
    }
};