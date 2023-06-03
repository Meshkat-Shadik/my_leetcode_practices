#define ll long long int
class Solution {
public:
    
    void dfs(vector<vector<int>>&g, vector<bool>&vis, int &c, int &i){
        vis[i]=true;
        c++;
        for(int j=0; j<g[i].size();j++){
            if(!vis[g[i][j]]){
                dfs(g,vis,c,g[i][j]);
            }
        }
    }
    
    
    int maximumDetonation(vector<vector<int>>& bombs) {
        int siz = bombs.size();
        vector<vector<int>>g(siz);
        for(int i=0; i<siz;i++){
            ll x1,y1,r1;
            x1 = bombs[i][0];
            y1 = bombs[i][1];
            r1 = bombs[i][2];
            
            for(int j=0;j<siz;j++){
                if(i!=j){
                    ll x,y;
                    x = abs(x1-bombs[j][0]);
                    y = abs(y1-bombs[j][1]);
                    
                    if(x*x+y*y<=r1*r1){
                        g[i].push_back(j);
                    }
                }
            }
        }
        int ans = INT_MIN;
        for(int i=0;i<siz;i++){
            int c = 0;
            vector<bool>vis(siz,false);
            dfs(g,vis,c,i);
            ans = max(ans,c);
        }
        return ans;
    }
};