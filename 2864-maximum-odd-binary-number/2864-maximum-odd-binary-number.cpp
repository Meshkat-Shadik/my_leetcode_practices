class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int zero = 0;
        int one = 0;
        
        for(auto i:s){
            if(i=='1') one++;
            else zero++;
        }
        int siz = s.size();
        s[siz-1] = '1';
        one-- ;
        
        for(int i=0; i<siz-1;i++){
            if(one>0){
                s[i]='1';
                one--;
            }
            else{
                s[i]='0';
                zero--;
            }
        }
        return s;
    }
};