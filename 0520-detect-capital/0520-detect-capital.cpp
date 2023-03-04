class Solution {
public:
    bool detectCapitalUse(string w) {
        
        int len = w.size();
        int count = 0;
        for(int i=0;i<len;i++)
        {
            if(isupper(w[i])){
                count++;
            }
        }
        
        
        if(isupper(w[0]) && count == 1)
        {
            return true;
        }
        
        if(count == len || count == 0)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};