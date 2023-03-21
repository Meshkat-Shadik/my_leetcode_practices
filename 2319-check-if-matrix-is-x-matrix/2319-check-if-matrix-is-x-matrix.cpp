class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& g) {
        int len = g.size();
        for(int i=0;i<len;i++)
        {
            int primary = g[i][i];
            int secondary = g[len-1-i][i];
            if(primary == 0 || secondary == 0) return false;
            else{
                int len2 = g[i].size();
                for(int j=0; j<len2; j++)
                {
                    if(g[i][j] != 0 && i!=j && i+j != len -1)
                    {
                        return false;
                    }
                }
            }
            
        }
        return true;
    }
};