class Solution {
string decimalToBase(int num ,int i) {
    stack<char> result;
    while (num > 0) {
        int rem = num % i;
        char digit = '0' + rem;
        result.push(digit);
        num /= i;
    }
    string baseNum;
    while (!result.empty()) {
        baseNum += result.top();
        result.pop();
    }
    return baseNum;
}
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            string s=decimalToBase(n,i);
            string org=s;
            reverse(s.begin(),s.end());
            if(org!=s)
                return false;
        }  
        return true;  
    }
};