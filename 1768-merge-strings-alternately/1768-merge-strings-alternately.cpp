class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int l1 = w1.size(), l2 = w2.size();
        int i=0,j=0;
        string res;
        
        while(i<l1 && j<l2){
            res.push_back(w1[i++]);
            res.push_back(w2[j++]);
        }
        while(i<l1){
            res.push_back(w1[i++]);
        }
         while(j<l2){
            res.push_back(w2[j++]);
        }
        return res;
    }
};