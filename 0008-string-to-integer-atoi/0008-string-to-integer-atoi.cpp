class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        bool isNeg = false;
        if(len == 0) return 0;
        
        int i = 0;
        while(s[i]==' ' && i<len){
            i++;
        }
        isNeg = s[i]=='-';
        if(s[i] == '+' || s[i] == '-'){
            i++;
        }
        const int limit = INT_MAX / 10;
        
        int res = 0;
        while(i<len && isDigit(s[i])){
            int dig = s[i]-'0';
            if(res>limit || (res == limit && dig>7)) //7 is the last dig of intmax
            {
                return isNeg?INT_MIN : INT_MAX;
            }
            res = res*10 + dig;
            i++;
        }
        return isNeg? -res:res;
    }
    
    bool isDigit(char c){
        return c>='0' && c<='9';
    }
};