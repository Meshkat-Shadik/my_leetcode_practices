class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        int len = a.size(), zc = 0;
       for(int i=0; i<len;i++){
           if(a[i]==0) zc++;
       }
        
        if(zc != 0){
        for(int i = len-1; i>=0 ;i--){
            int temp = i+zc;
            if(temp<len){
                a[temp] = a[i];
            }
            if(a[i] == 0){
                zc--;
                temp = i+zc;
                if(temp<len){
                    a[temp] = a[i];
                }
            }
         }
       }
    }
};