class Solution {
public:
    void duplicateZeros(vector<int>& a) {
        int len = a.size();
        for(int i=0;i<len-1;i++)
        {
            if(a[i]==0)
            {
                for(int j=len-2; j>=i ;j--){
                    a[j+1] = a[j];
                }
                i++;   
            }
        }
    }
};