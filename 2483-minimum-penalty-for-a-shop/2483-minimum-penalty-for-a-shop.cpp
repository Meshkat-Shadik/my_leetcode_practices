class Solution {
public:
    int bestClosingTime(string c) {
        int siz = c.length();
        vector<int>y,n;
        y.push_back(0);
        n.push_back(0);
        
        int count = 0;
        for(int i=0;i<siz;i++){
            if(c[i]=='N'){
                count++;
            }
            n.push_back(count);
        }
        count = 0;
        for(int i=siz-1;i>=0;i--){
            if(c[i]=='Y'){
                count++;
            }
            y.push_back(count);
        }
        reverse(y.begin(),y.end());
        int ans = INT_MAX, ind = 0;
        for(int i=0;i<siz+1;i++){
            int h = y[i]+n[i];
            if(h<ans){
                ans = h;
                ind = i;
            }
        }
        return ind;
    }
};