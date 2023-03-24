class Solution {
public:
    vector<int>g[50005];
    bool vis[50005];
    set<pair<int,int>>s;
    int minReorder(int n, vector<vector<int>>& con) {
        memset(vis,false,sizeof(vis));
        int len = con.size();
        for(int i=0; i<len; i++)
        {
            g[con[i][0]].push_back(con[i][1]);
            g[con[i][1]].push_back(con[i][0]);
            s.insert({con[i][0],con[i][1]});
        }
        queue<int>q;
        q.push(0);
        int count = 0;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            if(!vis[top]){
                vis[top] = true;
                for(int i=0; i<g[top].size();i++)
                {
                    q.push(g[top][i]);
                    if(!vis[g[top][i]] && s.count({top,g[top][i]})){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};