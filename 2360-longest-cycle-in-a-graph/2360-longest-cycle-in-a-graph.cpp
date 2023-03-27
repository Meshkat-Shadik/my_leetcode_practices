class Solution {
public:
    int count = -1;
    
    void dfs(int node, vector<int>& e, unordered_map<int,int>& dis, vector<bool>& vis ){
    
        vis[node] = true;
        int nei = e[node];
        
        if(nei != -1 && !vis[nei]){
            dis[nei] = dis[node] + 1; 
            dfs(nei,e,dis,vis);
        }
        else if(nei != -1 && dis.count(nei))
        {
            count = max(count, dis[node] - dis[nei] +1);
        }
    }
    
    
    int longestCycle(vector<int>& e) {
        int len = e.size();
        vector<bool>vis(len);
        for(int i=0; i<len;i++)
        {
            if(!vis[i])
            {
                unordered_map<int,int>dis;
                dis[i] = 1;
                dfs(i,e,dis,vis);
            }
        }
        return count;
    }
};