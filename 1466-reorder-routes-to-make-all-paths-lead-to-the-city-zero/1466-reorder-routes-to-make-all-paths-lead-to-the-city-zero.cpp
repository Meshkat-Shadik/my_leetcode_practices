class Solution {
public:
    struct e{
        int to = 0;
        bool exist = false;
    };
    
    vector<vector<e>>g;
    vector<int>vis;
    int count = 0;
    
    
    
    void dfs(vector<vector<int>>& con, int node){
        vis[node] = 1;
        for(auto i:g[node]){
            if(vis[i.to] == 0)   //not visited
            {
                if(i.exist){   //check reversed direction
                    count++;
                }
                dfs(con,i.to);
            }
        }
    }
    
    
    int minReorder(int n, vector<vector<int>>& con) {
        vis.resize(n);
        g.resize(n);
        int len = con.size();
        for(int i=0; i<len;i++){
            g[con[i][0]].push_back({con[i][1],true}); //reversed direction true
            g[con[i][1]].push_back({con[i][0],false});
        }
        dfs(con,0);
        return count;
    }
};