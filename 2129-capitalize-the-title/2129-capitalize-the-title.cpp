class Solution {
public:
    string capitalizeTitle(string t) {
        int len = t.size();
        for(int i=0; i<len; i++)
        {
            int temp = i;     //first index
            while(t[i]!=' ' && i<len)
            {
               t[i]= tolower(t[i]); 
               i++;           //finally last index of the word
            }
            if(i-temp>2){  // last - first length > 2 then it is a word
                t[temp] = toupper(t[temp]);  // turn first char upper
            }
        }
        return t;
    }
};