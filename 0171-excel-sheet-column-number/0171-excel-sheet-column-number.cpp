class Solution {
public:
    int titleToNumber(string t) {
        if(t.size()==1) return (t[0] - 'A' + 1);
        else{
            int sum = 0, n=t.size()-1;
            for(int i=0; i<t.size();i++)
            {
                int num = t[i]-'A'+1;
                sum = sum +myPow(26,n)*num;
                n--;
            }
                return sum;
            }
    }
    
    long myPow(long a, long n)
{
    int ans = 1;
    while (n > 0) {
        long last_bit = (n & 1);
        if (last_bit) {
            ans = ans * a;
        }
 
        a = a * a;
        n = n >> 1;
    }
 
    return ans;
}
};