class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int len = f.size();
         for(int i=0;i<len && n>0;i++){
         if(f[i]==0 &&(i==0 || f[i-1]==0) &&(i==len-1 || f[i+1]==0) ){
            n--;
            i++;
        } 
    }
    return n==0?true:false;
    }
};