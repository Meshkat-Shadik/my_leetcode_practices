class Solution {
public:
    int divide(int dividend, int divisor) {
         if(dividend == divisor)
            return 1;
        
        bool isPos = (dividend<0 == divisor<0);
        
        unsigned int a = abs(dividend);
        unsigned int b = abs(divisor);
        
        unsigned int ans = 0;
        while(a>=b){
            int q = 0;
            while(a>(b<<(q+1))){
                q++;
            }
            ans = ans + (1<<q);
            a = a - (b<<q);
        }
        if(ans == 1<<31 && isPos){
            return INT_MAX;
        }
        return isPos? ans:-ans;
    }
};