class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<3) return true;
        long long int s = 0, e = sqrt(c);
        while(s<=e){
            if(s*s + e*e == c){
                return true;
            }
            if(s*s + e*e < c){
                s++;
            }
            else{
                e--;
            }
        }
        return false;
    }
};