class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
       
       int sum = 0;
       int init=0;
       for(int i=s.size()-1; i>=0;i--)
       {
           if(m[s[i]]>=init)
           {
               sum = sum+m[s[i]];
           }
           else
           {
               sum = sum-m[s[i]];
           }
           init = m[s[i]];
       }
        //cout<<sum<<endl;
        
        return sum;
    }
}; 