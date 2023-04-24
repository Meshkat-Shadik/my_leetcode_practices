class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int>q;
        for(int i=0;i<s.size();i++){
            q.push(s[i]);
        }
        while(q.size()>1){
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            if(x>y){
              q.push(x-y);
            }
        }
        return q.size()>0?q.top():0;
    }
};