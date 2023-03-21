class Solution {
public:
    bool judgeCircle(string m) {
        int up = 0, down = 0, left = 0, right = 0;
        int len = m.size();
        
        for(int i=0;i<len;i++)
        {
           if(m[i]=='R') right++;
           else if(m[i]=='L') left++;
           else if(m[i]=='U') up++;
           else if(m[i]=='D') down++;
        }
        return right == left && up == down;
    }
};