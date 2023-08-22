class Solution {
public:
    string convertToTitle(int c) {
        int x;
        string ans = "";
        while(c>0){
            x = (c-1) % 26;
            ans = char('A'+x) + ans;
            c = (c-1)/26;
            
        }
        return ans;
    }
};
