class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& g){
        int m = g.size(), n = g[0].size();
        if(i>=m || j>=n || i<0 || j<0 || g[i][j] != 0){
            return;
        }
        g[i][j] = 1;
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        for(int k=0; k<4; k++)
        {
            dfs(i+dx[k],j+dy[k],g);
        }
    }
    
    
    int closedIsland(vector<vector<int>>& g) {
        int m = g.size(), n = g[0].size();
        for(int i=0;i<m;i++)
        {
          dfs(i,0,g);
          dfs(i,n-1,g);
        }
        for(int i=0;i<n;i++)
        {
            dfs(0,i,g);
            dfs(m-1,i,g);
        }
        
        int count = 0;
        for(int i=1; i<m-1; i++)
        {
            for(int j=1;j<n-1 ; j++)
            {
                if(g[i][j] == 0)
                {
                    dfs(i,j,g);
                    count++;
                }
            }
        }
        return count;
    }
};