class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        int l1 = g.size(), l2 = g[0].size();
        for(int i=0; i<l1; i++){
            for(int j=0; j<l2;j++)
            {
                if(i==0 && j!=0){
                    g[i][j] = g[i][j] + g[i][j-1];
                }
                if(i!=0 && j==0){
                    g[i][j] = g[i][j] + g[i-1][j];
                }
                if(i!=0 && j!=0){
                    g[i][j] = g[i][j] + min(g[i-1][j],g[i][j-1]);
                }
            }
        }
        return g[l1-1][l2-1];
    }
};