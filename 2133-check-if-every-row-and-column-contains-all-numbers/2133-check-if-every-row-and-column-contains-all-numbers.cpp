class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        int len = m.size();
        for(int i=0;i<len ;i++)
        {
            for(int j=0; j<len; j++)
            {
                int pos = abs(m[i][j]) - 1;   
                if(m[i][pos]<0) return false;
                m[i][pos] = -m[i][pos];    
                //we can mark it visited to its negative value
                //-1 would give wrong result in the column based position
            }
        }
        for(int i=0; i<len; i++)
        {
            for(int j=0; j<len; j++)
            {
                int pos = abs(m[j][i]) - 1;
                if(m[pos][i]>0) return false; //if any positive appears, then
                //it is sure that all values are not negated by the previous loop
                m[pos][i] = abs(m[pos][i]);
                //again turn the negative to positive
            }
        }
        return true;
    }
};