class Solution {
public:
    string defangIPaddr(string a) {
        string x = "[.]";
        string res = "";
        int len = a.size();
        for(int i=0; i<len ;i++)
        {
            if(a[i]=='.')
            {
                res=res+x;
            }
            else{
                res = res+a[i];
            }
        }
        return res;
    }
};