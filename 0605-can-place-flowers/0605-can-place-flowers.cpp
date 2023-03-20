class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int len = f.size();
        int z = 1, ans = 0;  //zero initialized as 1 for prefix extra 0
        for(int i=0; i<len; i++)
        {
            if(f[i]==0){
                z++;
            }
            else
            {
                ans = ans+(z-1)/2;
                z = 0;
            }
        }
        return ans+(z/2) >= n;    //last one doesn't need -1
    }
};