class Solution {
public:
    int bestClosingTime(string c) {
        int sum = 0, ans = 0, ind = -1, temp = 1;
        for(int i=0;i<c.size();i++){
           if(c[i]=='N') {
               temp = -1;
           }
            else{
                temp = 1;
            }
            sum = sum + temp;
            if(sum>ans){
                ans = sum;
                ind = i;
            }
        }
        return ind+1;
    }
};