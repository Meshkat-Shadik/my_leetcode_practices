class Solution {
public:
    int partitionString(string s) {
       int i = 0,count = 1, f = 0;
        while(i<s.size()){
            if(f&(1<<(s[i]-'a')))
            {
                //found
                //anding makes the same digit
                f = 0;
                count++;
            }
            f = f | (1<<(s[i] - 'a'));
            i++;
        }
        return count;
    }
};