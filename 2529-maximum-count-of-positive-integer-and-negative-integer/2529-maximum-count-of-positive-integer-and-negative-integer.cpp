class Solution {
public:
    int maximumCount(vector<int>& n) {
       int len = n.size()-1;
       if(n[0]>0 || n[len]<0){
            return len+1;
       }
        //0
        int s=0, e = len, mid;
        while(s<e){
            mid = s + (e-s)/2;
            if(n[mid]<0){
                s = mid+1;
            }
            else{
                e = mid;
            }
        }
        int zeroPos = s;
        s = 0;
        e = len+1;
        //1
        while(s<e){
            mid = s + (e-s)/2;
            if(n[mid]>0){
                e = mid;     
            }
            else{
                s = mid+1;
            }
        }
        int  pos = len+1 - s;
        return max(zeroPos,pos);
    }
};