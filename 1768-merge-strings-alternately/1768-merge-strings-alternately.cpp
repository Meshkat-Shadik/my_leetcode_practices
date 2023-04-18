class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int l1 = w1.size(), l2 = w2.size();
        int len = max(l1,l2);
        string res;
        for(int i=0; i<len; i++){
            if(i<l1){
                res = res + w1[i];
            }
            if(i<l2){
                res = res + w2[i];
            }
        }
        return res;
    }
};