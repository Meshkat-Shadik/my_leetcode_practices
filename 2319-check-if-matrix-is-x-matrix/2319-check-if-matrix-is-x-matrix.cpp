class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& g) {
        
        int len = g.size();
        int len2 = g[0].size();
        int p = 0;
        int q = len2-1;
        for(int i=0;i<len;i++)
        {
            for(int j=0; j<len2; j++)
            {
                if(i==j || (i==p && j==q))
                {
                    if(g[i][j]==0)
                    {
                        return false;
                    }
                }
                else{
                    if(g[i][j] !=0)
                    {
                        return false;
                    }
                }
            }
            p++;
            q--;
        }
        return true;
    }
};