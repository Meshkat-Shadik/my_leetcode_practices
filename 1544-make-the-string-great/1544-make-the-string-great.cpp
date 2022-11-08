class Solution {
public:
    string makeGood(string s) {
     int j=0,i=0;
    while(i<s.size())
    {
        if(j>0 && abs(s[j-1]-s[i])==32)
        {
            j--;
        }
        else{
            s[j++]=s[i];
        }
        i++;
    }
    return s.substr(0,j);
    }
};