class Solution {
public:
    string decodeMessage(string k, string me) {
        unordered_map<char,char>m;
        int len1 = k.size();
        int len2 = me.size();
      char temp = 'a';
      for(int i=0; i<len1; i++)
      {
          if(k[i] != ' ' && m.find(k[i]) == m.end())
          {
              m[k[i]]=temp;
              temp++;
          }
      }
      k.clear();
      for(int i=0; i<len2; i++)
      {
          if(me[i] == ' ')
          {
              k = k+" ";
          }
          else
          {
              k = k+ m[me[i]];
          }
      }
        return k;
    }
};