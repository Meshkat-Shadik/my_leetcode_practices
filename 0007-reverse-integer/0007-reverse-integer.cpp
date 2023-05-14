class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x){
            int dig = x%10;
            
            if(ans > (INT_MAX/10 - dig/10) || ans < (INT_MIN/10 - dig/10)){
                return 0;
            }
            ans = ans * 10;
            ans = ans + dig;
            x = x/10;
        }
        return ans;
    }
};