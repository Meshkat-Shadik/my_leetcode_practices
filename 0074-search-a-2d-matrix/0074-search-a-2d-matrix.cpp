class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int a = m.size(), b=m[0].size();
        int l = 0, h=(a*b)-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            int x = mid/b;
            int y = mid%b;
            
            if(m[x][y]==t){
                return true;
            }
            else if(m[x][y]<t){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return false;
    }
};