class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int r[9][9]={0};
        int c[9][9]={0};
        int m[9][9]={0};
        
        int len1 = b.size(), len2 = b[0].size();
      
        for(int i=0;i<len1; i++)
        {
            for(int j=0;j<len2; j++)
            {
                if(b[i][j] != '.')
                {
                    int pos = b[i][j] - '0';
                    int mk = i/3*3+j/3; 
                    if(r[i][pos-1]++ || c[j][pos-1]++ || m[mk][pos-1]++)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};