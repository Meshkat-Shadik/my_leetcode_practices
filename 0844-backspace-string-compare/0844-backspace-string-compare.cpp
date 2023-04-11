class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int l1 = s.size();
        int l2 = t.size();
        int j = 0, k = 0;
        for(int i=0; i<l1; i++){
            if(s[i] == '#'){
                j--;
                j = max(0,j);
            }
            else{
                s[j] = s[i];
                j++;
            }
        }
        
        for(int i = 0 ;i<l2 ; i++){
            if(t[i] == '#'){
                k--;
                k = max(0,k);
            }
            else{
                t[k] = t[i];
                k++;
            }
        }
        
        // cout<<k<<" - "<<s<<","<<t<<endl;
        
        if(k != j) return false;
        
        else{
            for(int i=0; i<j;i++){
                if(s[i] != t[i]){
                    return false;
                }
            }
            return true;
        }
    }
};