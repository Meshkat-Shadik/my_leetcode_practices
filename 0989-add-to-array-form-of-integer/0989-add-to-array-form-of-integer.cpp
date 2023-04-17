class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int len = num.size();
       for(int i=len-1;i>=0;i--){
           num[i]=num[i]+k;
           k = num[i]/10;
           num[i] = num[i]%10;
       }
        while(k>0){
            num.insert(begin(num),k%10);
            k = k/10;
        }
        return num;
    }
};