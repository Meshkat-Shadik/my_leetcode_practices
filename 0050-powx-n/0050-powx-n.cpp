class Solution {
public:
    double myPow(double x, int nn) {
        long long n = nn;
        if(x==0) return 0;
        if(n==0) return 1;
        double res = 1;
  
        if(n < 0){
            n = -n; //making positive 
            x = 1 / x;
        }
        
        while(n){
            if(n&1){  //odd
                res = res * x; //extra x
            }
            x = x*x;
            n = n>>1;  //n/2;
        }
      
        return res;
    }
};