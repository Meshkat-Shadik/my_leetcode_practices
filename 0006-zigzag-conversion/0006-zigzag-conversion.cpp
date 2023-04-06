class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        string res= "";
        for(int i =0;i<n;i++)
        {
            int inc = 2 * (n-1);  //normal formula for 1st and last row
            for(int j = i; j<s.size(); j=j+inc)
            {
                res = res+s[j];
                int temp = j+inc - 2*i;  //formula for middle rows
                if(i>0 && i<n-1 && temp<s.size()){
                    res = res+s[temp];
                }
            }
        }
        return res;
    }
};