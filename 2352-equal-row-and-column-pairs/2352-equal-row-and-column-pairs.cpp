class T{
    public:
    int count = 0;
    map<int,T*>m;
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
       T* t = new T();
       int n=g.size();
        
       for(int i=0; i<n; i++){
           T* nt = t;
           for(int j=0; j<n; j++){
               if(nt->m.find(g[i][j]) == nt->m.end()){
                   //painai tai add korsi
                   nt->m[g[i][j]] = new T();
               }
               nt = nt->m[g[i][j]];
           }
           nt->count = nt->count+1;
       }
        
        int ans = 0;
        for(int j=0; j<n; j++){
            T* nt = t;
            for(int i = 0; i<n;i++){
                 if(nt->m.find(g[i][j]) == nt->m.end()){
                   //paisi so break;
                     break;
               }
                nt = nt->m[g[i][j]];
            }
            ans = ans + nt->count;
        }
        return ans;
    }
};