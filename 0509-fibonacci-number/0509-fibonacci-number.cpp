class Solution {
public:
    int fib(int n) {
        int res = 0;
        if(n<2) return n;
        
        int first = 0, second = 1;
        
        for(int i=1;i<n;i++){
            res = first+second;
            first = second;
            second = res;
        }
        return res;
    }
};