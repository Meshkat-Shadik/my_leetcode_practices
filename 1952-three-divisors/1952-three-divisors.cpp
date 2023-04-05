class Solution {
public:
    bool isThree(int n) {
        if(n<4){
            return false;
        }
        int s = int(sqrt(n));
        if(s*s != n){
            return false;
        }
        
        for(int i=2;i<s;i++)
        {
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};