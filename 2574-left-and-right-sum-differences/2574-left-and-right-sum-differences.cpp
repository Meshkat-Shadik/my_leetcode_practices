class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& ns) {
        int len = ns.size();
        int sum = 0;
        vector<int>res;
        for(int i=0; i<len; i++){
            sum = sum + ns[i];
        }
        int lSum = 0, rSum = sum;
        
        for(int i=0; i<len;i++){
            rSum = rSum - ns[i];
            res.push_back(abs(rSum - lSum));
            lSum = lSum + ns[i];
        }
        return res;
    }
};