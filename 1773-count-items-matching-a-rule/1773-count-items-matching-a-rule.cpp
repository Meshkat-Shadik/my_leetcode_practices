class Solution {
public:
    int countMatches(vector<vector<string>>& it, string rK, string rV) {
       
        int index = 0;
        if(rK[0] == 'c') //trick for runtime fast
        {
            index = 1;
        }
        else if(rK[0] == 'n'){
            index = 2;
        }
        int len = it.size();
        int count = 0;
        for(int i=0; i<len; i++)
        {
            if(it[i][index] == rV)
            {
                count++;
            }
        }
        return count;
    }
};