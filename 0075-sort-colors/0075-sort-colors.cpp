class Solution {
public:
    void sortColors(vector<int>& n) {
        int zeroPos=0,i=0,twoPos=n.size()-1;
        while(i<=twoPos)
        {
            if(n[i]==0){
                swap(n[zeroPos],n[i]);
                i++;
                zeroPos++;
            }
           else if(n[i]==2){
               swap(n[twoPos],n[i]);
               twoPos--;
           }
            else{
                i++;
            }
        }
    }
};