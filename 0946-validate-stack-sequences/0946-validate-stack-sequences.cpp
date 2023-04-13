class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        stack<int>s;
        int j = 0;
        for(int i = 0; i<pu.size(); i++){
            s.push(pu[i]);
            while(!s.empty() && s.top() == po[j]){
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};