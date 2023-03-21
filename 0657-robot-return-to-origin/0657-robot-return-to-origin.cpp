class Solution {
public:
    bool judgeCircle(string m) {
        int initX = 0;
        int initY = 0;
        int len = m.size();
        
        for(int i=0;i<len;i++)
        {
            if(m[i]=='R')
            {
                initX++;
            }
            if(m[i]=='L')
            {
                initX--;
            }
            if(m[i]=='U')
            {
                initY++;
            }
            if(m[i]=='D')
            {
                initY--;
            }
        }
        return initX == 0 && initY == 0;
    }
};