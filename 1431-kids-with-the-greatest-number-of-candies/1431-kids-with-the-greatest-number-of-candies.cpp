class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        int len = c.size();
        int maxx = -1;
        
        vector<bool>res;
        
        for(int i=0;i<len;i++){
            if(c[i]>maxx){
                maxx = c[i];
            }
        }
        
        for(int i=0;i<len;i++){
            res.push_back(c[i]+ec >= maxx);
        }
        return res;
    }
};