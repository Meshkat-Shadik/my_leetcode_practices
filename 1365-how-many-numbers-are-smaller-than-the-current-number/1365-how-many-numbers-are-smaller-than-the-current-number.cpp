class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& n) {
        int b[101] = {0};
        for(int i=0; i<n.size();i++){
            b[n[i]]++;
        }
        
        
        for(int i=1; i<101;i++){
            b[i] = b[i] + b[i-1];
        }
        
        
        for(int i=0; i<n.size(); i++){
            if(n[i]!=0){
                n[i] = b[n[i]-1];
            }
        }
        
        return n;
    }
};