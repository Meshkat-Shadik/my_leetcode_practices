class Solution {
public:
    int gcd(int a, int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    
    string gcdOfStrings(string s1, string s2) {
        string c1 = s1+s2;
        string c2 = s2+s1;
        if(c1!=c2) return "";
        int gcdVal = gcd(s1.length(),s2.length());
        return s1.substr(0,gcdVal);
    }
    
};